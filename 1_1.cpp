#include <iostream>
using namespace std;

int a, b;
char c;

void t1(){
    cin >> a;
    cout << "hex" << a;
}
void t2(){
    cin >> c;
    switch(c){
        case '.': cout << "�����"; break;
        case ',': cout << "�������"; break;
        case '-': cout << "����"; break;
        case '?': cout << "���� �������"; break;
        case '!': cout << "��������������� ����"; break;
        case ':': cout << "���������"; break;
        case ';': cout << "����� � �������"; break;
        case '...': cout << "����������"; break;
        default: cout << "�����-�� ������";
    }
}
void t3(){
    cin >> a;
    switch(a){
        case 1: cout << "I"; break;
        case 5: cout << "V"; break;
        case 10: cout << "X"; break;
        case 50: cout << "L"; break;
        case 500: cout << "D"; break;
    }
}

void t4(){
    cin >> a;
    switch(a){
        case 1: cout << 31+31+28; break;
        case 2: cout << 31+30+31; break;
        case 3: cout << 30+31+31; break;
        case 4: cout << 30+31+30; break;
        default: cout << "������ ������� ���� �� ����������";
    }
}

void t5(){
    cin >> a >> b;
    switch(b){
        case 1: cout << a; break;
        case 2: cout << a*0.000001; break;
        case 3: cout << a*1.0/1000; break;
        case 4: cout << a*1000; break;
        case 5: cout << a*100; break;
    }
}

void t6(){
    cin >> a;
    switch(a%7){
        case 0: cout << "��"; break;
        case 1: cout << "��"; break;
        case 2: cout << "��"; break;
        case 3: cout << "��"; break;
        case 4: cout << "��"; break;
        case 5: cout << "��"; break;
        default: cout << "��"; break;
    }
}

void t7(){
    cin >> a;
    string str;
    switch(a){
        case 1: str = "���������"; break;
        case 2: str = "���������"; break;
        case 3: str = "���������"; break;
        case 4: str = "���������"; break;
        default: str = "��������";
    }
    cout << "� ���������� " << a << " " << str << endl;
}

void t8(){
    cin >> a >> b;
    if(b>0 && b<13){
        cout << endl;
    }else{
        cout << "Wrong date";
    }
}

void t9(){
    cin >> a >> b;
    cin >> c;
    switch(c){
        case '+': cout << 31+31+28; break;
        case '-': cout << 31+30+31; break;
        case '*': cout << 30+31+31; break;
        case '/': cout << 30+31+30; break;
        default: cout << "Error";
    }
}

void t10(){
    cin >> a;
    switch(a){
        case 1: cout << 31+31+28; break;
        case 2: cout << 31+30+31; break;
        case 3: cout << 30+31+31; break;
        case 4: cout << 30+31+30; break;
        default: cout << "������ ������� ���� �� ����������";
    }
}

void t11(){
    cin >> a;
    switch(a){
        case 1: cout << 31+31+28; break;
        case 2: cout << 31+30+31; break;
        case 3: cout << 30+31+31; break;
        case 4: cout << 30+31+30; break;
        default: cout << "������ ������� ���� �� ����������";
    }
}

int main(){
    setlocale(LC_ALL, "rus");

    int task;
    cout << "������� ����� ������: \n";
    cin >> task;

    switch(task){
        case 1: t1(); break;
        case 2: t2(); break;
        case 3: t3(); break;
        case 4: t4(); break;
        case 5: t5(); break;
        case 6: t6(); break;
        case 7: t7(); break;
        case 8: t8(); break;
        case 9: t9(); break;
        case 10: t10(); break;
        default: t11();
    }
    return 0;
}
