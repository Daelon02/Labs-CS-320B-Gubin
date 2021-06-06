# include <iostream>;
#include "Square.h"
using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	int n = 0;
	int l = 0;
	int f = 0;
	int S = 0;
s:
	system("cls");
	cout << " Найти площадь." << endl;
	cout << "1.Квадрата." << endl;
	cout << "2.Прямоугольника." << endl;
	cout << "0.Выход." << endl;
	cin >> n;
	switch (n) {
	case 1:
		cout << "Введите высоту квадрата: ";
		cin >> l;
		S = square(l);
		cout << "Площадь квадрата: " << S << endl;
		break;
	case 2:
		cout << "Введите высоту и ширину прямоугольника: ";
		cin >> l;
		cin >> f;
		S = square(l, f);
		cout << "Площадь прямоугольника: " << S << endl;
		break;
	case 0:
		return 0;
		break;
	default:
		cout << "Неверное значение!" << endl;
		break;
	}
	system("pause");
	goto s;
}