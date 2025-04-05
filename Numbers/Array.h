#pragma once
#include <iostream>
#include <vector>

using namespace std;

class Array {
    int length; // ����� ������� �����
    vector <int> nums;
public:
    // ����������� ������ ������� �����
    Array();

    // ����������� ������ ������� ����� ������������ �����
    Array(int len);

    int Get_length();

    // ���������� �������    
    void Input();

    // ��������/��������� ��������
    void Sum(Array numbers2, char sign); // sign ��� "+"" ��� "-"
    
    // ���������/������� ������� �� ������
    void Multiply(int scalar, char sign); // sign ��� "*" ��� "/"    

    // ����� �������� ������� �� �������
    void print(int i);

    // ����� ����� �������
    void print_all();

    vector<int> Get_Nums();

    int Get_elem(int i);

    void Set_elem(int i, int value);
};

Array Sum(Array numbers1, Array numbers2, char sign); // sign ��� "+"" ��� "-"

Array Multiply(Array numbers, int scalar, char sign); // sign ��� "*" ��� "/"





