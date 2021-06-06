#include "Comparison.h"
#include "ToLowers.h"
#include <iostream>
#include <string>
#include <locale>
using namespace std;

int main() {
    for (;;) {
    M:
        system("cls");
        string str1 = "";
        string str2 = "";
        cout << "Введите первую строку: ";
        cin >> str1;
        if (str1.length() < 1) {
            cout << "В строке должно быть не меньше одного символа. " << endl;
            system("pause");
            goto M;
        }
        cout << "Введите вторую строку: ";
        cin >> str2;
        if (str2.length() < 1) {
            cout << "В строке должно быть не меньше одного символа. " << endl;
            system("pause");
            goto M;
        }
        if (str1.length() != str2.length()) {
            cout << "Строки разного размера." << endl;
            system("pause");
            goto M;
        }
        else {
            bool C = comparison(str1, str2);
            if (C == false)
                cout << "Строки не равны." << endl;
            else
                cout << "Строки равны." << endl;
            system("pause");
        }
    }
}