#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include "triangle.h"
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    ifstream edit("edit.txt");
    vector<Right_Triangle> vec;
    string line, tmp;    
    double l1, l2;

    if (edit.is_open()) {
        while (getline(edit, line)) {
            stringstream ss(line);
            ss >> tmp >> l1 >> tmp >> l2;
            //cout << l1 << " " << l2 << "\n";
            vec.push_back(Right_Triangle(l1, l2));
        }
    }
    edit.close();

    ofstream memo("memo.txt");
    for (auto elem : vec) {
        cout << elem.print() << "\n";
        memo << elem.print() << "\n";
    }
    memo.close();
    return 0;
}
