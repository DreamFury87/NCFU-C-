#include "Array.h"
#include <iostream>
#include <vector>
//using namespace std;

// Конструктор класса массива чисел
Array::Array() {
    length = 1;
    //std::vector <int> numbers(length);
    nums = vector<int>(length);
}
// Конструктор класса массива чисел произвольной длины
Array::Array(int len) {    
    length = len;
    //std::vector <int> numbers(length);
    nums = vector<int>(length);
    //std::cout << numbers.size() << std::endl;
}
   
int Array::Get_length() {
    return length;
}

//Получение поля nums
vector<int> Array::Get_Nums() {
    return nums;
}

//Получение произвольного элемента
int Array::Get_elem(int i) {
    if (i < length && i >= 0) {
        return nums[i];
    }
    else {
        std::cout << "Element can't be found" << std::endl;
    }
}

//Изменение значения произвольного элемента
void Array::Set_elem(int i, int value) {
    if (i < length && i >= 0) {
        //std::cout << value << std::endl;
        nums[i] = value;
    }
    else {
        std::cout << "List index is out of range!" << std::endl;
    }
}

// Заполнение массива
void Array::Input() {    
    int value;   
    for (int i = 0; i < length; i++) {        
        std::cout << "i = ";
        std::cin >> value;        
        nums[i] = value;
    }    
}

// Сложение/Вычитание массивов с получением нового массива
Array Sum(Array numbers1, Array numbers2, char sign) { // sign это "+"" или "-"
    if (numbers1.Get_length() != numbers2.Get_length()) {
        cout << "Длины массивов различны!" << endl;
        return numbers1;
    }
    else {
        int s;
        if (sign == '+')
            s = 1;
        else if (sign == '-')
            s = -1;
        else {
            cout << "Char error!";
            return numbers1;
        }
        Array Sum(numbers1.Get_length());
        
        for (int i = 0; i < numbers1.Get_length(); i++) {
            
            Sum.Set_elem(i, numbers1.Get_elem(i) + s * numbers2.Get_elem(i));
            //Sum.nums[i] = numbers1.nums[i] + s * numbers2.nums[i];
        }
        return Sum;
    }
}
// Умножение/деление массива на скаляр с получением нового массива
Array Multiply(Array numbers, int scalar, char sign) { // sign это "*" или "/"
    if (sign == '*') {
        for (int i = 0; i < numbers.Get_length(); i++) {
            numbers.Set_elem(i, numbers.Get_elem(i) * scalar);
            //numbers.nums[i] *= scalar;
        }
    }
    else if (sign == '/') {
        if (scalar == 0) {
            cout << "Division by zero!" << endl;
        }
        else {
            for (int i = 0; i < numbers.Get_length(); i++) {
                numbers.Set_elem(i, numbers.Get_elem(i) / scalar);
                //numbers.nums[i] /= scalar;
            }
        }
    }
    else {
        cout << "Char error!";
    }
    return numbers;
}

// Вывод элемента массива по индексу
void Array::print(int i) {
    if (i < length && i >= 0 ) {
        std::cout << nums[i] << std::endl;
    }
    else {
        std::cout << "Element can't be found" << std::endl;
    }
}
// Вывод всего массива
void Array::print_all() {
    for (int i = 0; i < length; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

// Сложение/Вычитание массивов с изменением этого массива
void Array::Sum(Array numbers2, char sign) { // sign это "+"" или "-"
    if (length != numbers2.Get_length()) {
        std::cout << "Длины массивов различны!" << std::endl;
    }
    else {
        int s;
        if (sign == '+')
            s = 1;
        else if (sign == '-')
            s = -1;
        else {
            cout << "Char error!";            
        }
        
        for (int i = 0; i < length; i++) {
            nums[i] += s * numbers2.nums[i];
        }       
    }
}
// Умножение/деление массива на скаляр с изменением этого массива
void Array::Multiply(int scalar, char sign) { // sign это "*" или "/"
    if (sign == '*') {
        for (int i = 0; i < length; i++) {
            nums[i] *= scalar;
        }
    }
    else if (sign == '/') {
        if (scalar == 0) {
            cout << "Division by zero!" << endl;
        }
        else {
            for (int i = 0; i < length; i++) {
                nums[i] /= scalar;
            }
        }
    }
    else {
        cout << "Char error!";
    }    
}
