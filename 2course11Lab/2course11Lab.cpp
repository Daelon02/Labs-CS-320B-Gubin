#include "Point.h"
# include <iostream>;
using namespace std;

int main() {
    int x, y;
    cout << "Создание класса с конструктором по умолчанию и обращением к элементам через объекты." << endl;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    POINT* s1 = new POINT();
    s1->SetXY(x, y);
    cout << "Вывод результатов." << endl;
    s1->Output();
    //------------------------------------------------------------------------------------
    cout << "Создание класса через конструктор с параметрами и обращением к элементам через указатели." << endl;
    cout << "Введите x: ";
    cin >> x;
    cout << "Введите y: ";
    cin >> y;
    POINT* s2 = new POINT();
    s2->SetXY(x, y);
    cout << "Вывод результатов." << endl;
    s2->Output();
    system("pause");
}
