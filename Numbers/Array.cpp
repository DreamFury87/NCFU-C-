#include "Array.h"
#include <iostream>
#include <vector>
//using namespace std;

// ����������� ������ ������� �����
Array::Array() {
    length = 1;
    //std::vector <int> numbers(length);
    nums = vector<int>(length);
}
// ����������� ������ ������� ����� ������������ �����
Array::Array(int len) {    
    length = len;
    //std::vector <int> numbers(length);
    nums = vector<int>(length);
    //std::cout << numbers.size() << std::endl;
}
   
int Array::Get_length() {
    return length;
}

//��������� ���� nums
vector<int> Array::Get_Nums() {
    return nums;
}

//��������� ������������� ��������
int Array::Get_elem(int i) {
    if (i < length && i >= 0) {
        return nums[i];
    }
    else {
        std::cout << "Element can't be found" << std::endl;
    }
}

//��������� �������� ������������� ��������
void Array::Set_elem(int i, int value) {
    if (i < length && i >= 0) {
        //std::cout << value << std::endl;
        nums[i] = value;
    }
    else {
        std::cout << "List index is out of range!" << std::endl;
    }
}

// ���������� �������
void Array::Input() {    
    int value;   
    for (int i = 0; i < length; i++) {        
        std::cout << "i = ";
        std::cin >> value;        
        nums[i] = value;
    }    
}

// ��������/��������� �������� � ���������� ������ �������
Array Sum(Array numbers1, Array numbers2, char sign) { // sign ��� "+"" ��� "-"
    if (numbers1.Get_length() != numbers2.Get_length()) {
        cout << "����� �������� ��������!" << endl;
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
// ���������/������� ������� �� ������ � ���������� ������ �������
Array Multiply(Array numbers, int scalar, char sign) { // sign ��� "*" ��� "/"
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

// ����� �������� ������� �� �������
void Array::print(int i) {
    if (i < length && i >= 0 ) {
        std::cout << nums[i] << std::endl;
    }
    else {
        std::cout << "Element can't be found" << std::endl;
    }
}
// ����� ����� �������
void Array::print_all() {
    for (int i = 0; i < length; i++) {
        std::cout << nums[i] << " ";
    }
    std::cout << std::endl;
}

// ��������/��������� �������� � ���������� ����� �������
void Array::Sum(Array numbers2, char sign) { // sign ��� "+"" ��� "-"
    if (length != numbers2.Get_length()) {
        std::cout << "����� �������� ��������!" << std::endl;
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
// ���������/������� ������� �� ������ � ���������� ����� �������
void Array::Multiply(int scalar, char sign) { // sign ��� "*" ��� "/"
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
