#include <iostream>
#include <string>
using namespace std;

struct Child {
    string name; // Имя ребенка
    char gender;      // Пол ('M' для мальчика, 'F' для девочки)
    double height;      // Рост в сантиметрах
};

int main() {
    setlocale(LC_ALL, "ru");
    int numChildren = 20;
    Child children[numChildren];

    for (int i = 0; i < numChildren; ++i) {
        cout << "Введите имя ребенка " << (i + 1) << ": ";
        cin >> children[i].name;
        cout << "Введите пол (M/F) для " << children[i].name << ": ";
        cin >> children[i].gender;
        cout << "Введите рост (в см) для " << children[i].name << ": ";
        cin >> children[i].height;
    }

    string tallestGirlName;
    int tallestGirlHeight = 0;

    for (int i = 0; i < numChildren; ++i) {
        if (children[i].gender == 'F' && children[i].height > tallestGirlHeight) {
            tallestGirlHeight = children[i].height;
            tallestGirlName = children[i].name;
        }
    }

    if (!tallestGirlName.empty()) {
        cout << "Имя самой высокой девочки: " << tallestGirlName << " (рост: " << tallestGirlHeight << " см)" << endl;
    } else {
        cout << "Девочек в списке нет." << endl;
    }

    return 0;
}
