#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Array {
    int length; // Длина массива чисел
    vector <int> nums;
public:
    // Конструктор класса массива чисел
    Array();

    // Конструктор класса массива чисел произвольной длины
    Array(int len);

    int Get_length();

    // Заполнение массива    
    void Input();

    // Сложение/Вычитание массивов
    void Sum(Array numbers2, char sign); // sign это "+"" или "-"
    
    // Умножение/деление массива на скаляр
    void Multiply(int scalar, char sign); // sign это "*" или "/"    

    // Вывод элемента массива по индексу
    void print(int i);

    // Вывод всего массива
    void print_all();

    vector<int> Get_Nums();

    int Get_elem(int i);

    void Set_elem(int i, int value);
};

Array Sum(Array numbers1, Array numbers2, char sign); // sign это "+"" или "-"

Array Multiply(Array numbers, int scalar, char sign); // sign это "*" или "/"





