#include <fstream>
#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct Author{
    string author;
    string title;
    int edition;
    int price;
    int year_of_publication;
};

int main() {
    setlocale(LC_ALL, "Russian");
    system("chcp 1251");

    ofstream data("authors.bin", ios::binary | ios::out);
    vector<Author> arr = {{"����� ������", "�������� � �������", 20000, 978, 2024},
                          {"��������� ��������", "˸���� ��� ������ ���������", 5000, 1999, 2005},
                          {"������ ����������", "������ �����", 3000, 1235, 2019},
                          {"����� ������", "�������� � ��������� ���������", 3000, 890, 1934},
                          {"���� ������", "��� ������� ", 5000, 656, 2022}};

    if(data.is_open()){
        for(auto & elem: arr)
            data.write((char*)&elem, sizeof(elem));
    }
    data.close();

    vector<Author> data_from_file;
    vector<Author> sorted_data;

    ifstream in("authors.bin", ios::binary | ios::in);
    Author elem;

    if(in.is_open()){
        while(in.read((char*)&elem, sizeof(Author))){
            data_from_file.push_back(elem);
        }
    }
    in.close();

    string title_;
    cout << "�������� ����: \n";
    for(auto elem: data_from_file){
        cout << elem.author << " " << elem.title << " �����: " << elem.edition <<
        " ����: " << elem.price << " ��� �������: " << elem.year_of_publication << endl;

        title_ = elem.title;
        if(title_.find("��������") != string::npos){
            sorted_data.push_back(elem);
        }
    }

    cout << "\n\n�����, � ��������� ������� ���� �������� ����� ���������: \n";
    for(auto elem: sorted_data){
        cout << elem.author << " " << elem.title << " �����: " << elem.edition <<
        " ����: " << elem.price << " ��� �������: " << elem.year_of_publication << endl;

    }

    return 0;
}
