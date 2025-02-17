#include <iostream>
#include <ctime>
#include <fstream>
using namespace std;

int sign(int num){
    int answer = rand() % 3 - 1;
    return answer * num;
}

int main(){
    setlocale(LC_ALL, "Russian");
    ofstream data("nums.txt");
    int elem, start = 0, endi = 100;
    srand(time(NULL));

    for(int i = 0; i < 30; ++i){
        elem = sign(rand() % (endi - start + 1) + start);
        data << elem << "\n";
    }

    data.close();
    ifstream in("nums.txt");
    int sum = 0, counti = 0, idx = 1;
    cout << "Исходный файл: " << endl;

    if(in.is_open()){
        while(in >> elem){
            cout << elem << " ";
            if(idx % 3 == 0 && elem > 0){
                sum += elem;
                counti++;
            }
            idx += 1;
        }
        cout << "\n\n";
        cout << "Среднее значение суммы положительных элементов, номера которых кратны 3: " << sum/counti;
        cout << endl;
    }
    in.close();
    return 0;
}
