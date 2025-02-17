#include <iostream>
#include <fstream>
using namespace std;

int main(){
    setlocale(LC_ALL, "Russian");
    ifstream in1("a1.txt");
    ifstream in2("a2.txt");

    int countj = 0, counti = 0;
    double elem;

    cout << "Исходный файл a1.txt: " << endl;

    if(in1.is_open()){
        while(in1 >> elem){
            cout << elem << " ";
            if(elem == 0) counti++;
        }

        cout << "\n";
        cout << "Количество нулевых элементов в a1.txt: " << counti;
        cout << "\n\n";
    }

    cout << "Исходный файл a2.txt: " << endl;

    if(in2.is_open()){
        while(in2 >> elem){
            cout << elem << " ";
            if(elem == 0) countj++;
        }
        cout << "\n\n";
        cout << "Количество положительных элементов в a2.txt: " << countj;
        cout << "\n\n";
    }
    in1.close();
    in2.close();
    return 0;
}
