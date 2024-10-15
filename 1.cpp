#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int a, b, c, d;


void t1(){
    if(a==0){
        cout << 1;
    }else if(b==0){
        cout << 2;
    }else{
        cout << 3;
    }
}


void t3(){
    int tmp = a*b*2;
    if(a>b){
        a = (a+b)/2;
        b = tmp;
    }else{
        b = (a+b)/2;
        a = tmp;
    }
    cout << a << " " << b;
}


void t2(vector<int> arr){
    int mn=0,mx=0;
    for(int i=1; i<3; i++){
        if(arr[i]<arr[mn]){
            mn=i;
        }
    }
    for(int i=1; i<3; i++){
        if(arr[i]>arr[mx]){
            mx=i;
        }
    }
    cout << mn+1 << " " << mx+1;
}


void t4(vector<int> arr){
    int plus_ = 0;
    int minus_ = 0;
    for(int i=0; i<4; i++){
        if(arr[i]>0){
            plus_++;
        }
        if(arr[i]<0){
            minus_++;
        }
    }
    cout << plus_ << " " << minus_;
}


void t5(vector<int> arr){
    sort(arr.begin(), arr.end()-1);
    cout << arr[2] - arr[0];
}


void t6(vector<int> arr){
    sort(arr.begin(), arr.end()-1);
    for(int i = 0; i<3; i++){
        cout << arr[i] << " ";
    }
}


void t7(vector<int> arr){
    sort(arr.begin(), arr.end()-1);
    cout << arr[1] << " " << arr[2];
}


void t8(vector<int> arr){
    int mn=0;
    for(int i = 0; i<3; i++){
        if(arr[i] < arr[mn]){
            mn = i;
        }
    }
    if(mn==0){
        a = (b + c)/2;
    }else if(mn==1){
        b = (c + a)/2;
    }else{
        c = (b + a)/2;
    }
    cout << a << " " << b << " " << c;
}


void t9(vector<int> arr){
    double max_ = -99999999999;
    for(int i = 0; i<4; i++){
        if(max_ < arr[i]){
            max_ = arr[i];
        }
    }
    cout << a/max_ << " " << b/max_ << " " << c/max_ << " " << d/max_;
}


void t10(vector<int> arr){
    for(int i=1; i < 4; i++){
        for(int j=0; j < 4 - i; j++){
            if(arr[j] < arr[j+1]) swap(arr[j],arr[j+1]);
        }
    }

    for(int i=0; i < 4; i++){
        cout << arr[i] << " ";
    }
    a = arr[0];
    b = arr[1];
    c = arr[2];
    d = arr[3];
}


int main(){
    setlocale(LC_ALL, "rus");

    int task;
    cout << "¬ведите номер задачи: \n";
    cin >> task;
    cout << "¬ведите 4 числа: \n";
    cin >> a >> b >> c >> d;
    vector<int> arr{a, b, c, d};

    switch(task){
        case 1: t1(); break;
        case 2: t2(arr); break;
        case 3: t3(); break;
        case 4: t4(arr); break;
        case 5: t5(arr); break;
        case 6: t6(arr); break;
        case 7: t7(arr); break;
        case 8: t8(arr); break;
        case 9: t9(arr); break;
        default: t10(arr);
    }
    return 0;
}
