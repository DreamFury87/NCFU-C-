#include <iostream>
#include <string>
using namespace std;

int count_letter_a(string name){
    int result = 0;
    for(auto let: name){
        if(let == 'а' or let=='А') result++;
    }
    return result;
}

int main()
{
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");
    const int n{5};

    string girls_names[n];

    cout << "Введите " << n << " имён девочек:\n";
    for(int i = 0; i < n; ++i){
        getline(cin, girls_names[i]);
    }

    int index = 0, max_count_a = 0;
    for(int i = 0; i < n; ++i){
        int current_count = count_letter_a(girls_names[i]);
        if(current_count >= max_count_a){
            max_count_a = current_count;
            index = i;
        }
    }


    cout << "\nИмя с максимальным количеством букв 'а': " <<
    girls_names[index] <<  endl;
    return 0;
}
