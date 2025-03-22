#include <iostream>
#include <string>
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    const int n{20};

    string mountain_peaks[n];

    cout << "Введите " << n << " горных вершин:\n";
    for(int i = 0; i < n; ++i){
        getline(cin, mountain_peaks[i]);
    }

    int index = 0;
    for(int i = 0; i < n; ++i){
        if(mountain_peaks[i].length() > mountain_peaks[index].length()) index = i;
    }


    cout << "\nВершина с максимальным количеством букв: mountain_peaks[" << index << "] - " <<
    mountain_peaks[index] <<  endl;
    return 0;
}
