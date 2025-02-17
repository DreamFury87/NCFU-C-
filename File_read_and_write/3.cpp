#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    ofstream data("data.txt");
    char elem;
    int start = 48, endi = 122;
    srand(time(NULL));

    if(data.is_open()){
        for(int i = 0; i < 30; ++i){
            elem = rand() % (endi - start + 1) + start;
            data << elem << "\n";
        }
    }
    data.close();

    ifstream in("data.txt");
    ofstream out("output.txt");
    cout << "Исходный файл: " << endl;

    if(in.is_open()){
        while(in >> elem){
            cout << elem << " ";
            if(elem >= 48 && elem <= 57){
                out << "* ";
            }else{
                out << elem << " ";
            }
        }
        cout << endl;
    }
    out.close();
    in.close();
    ifstream result("output.txt");

    cout << "\nПосле замены всех цифр на '*': " << endl;
    if(result.is_open()){
        while(result >> elem){
            cout << elem << " ";
        }
        cout << endl;
    }
    result.close();
    return 0;
}
