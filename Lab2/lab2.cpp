#include<iostream>
#include<windows.h>
#include "struct_file.h"

#define str_sz 15

using namespace std;


struct Space ms[N], x;

int sz = 0;

int main() {

	int checker;

	while (true) {
		cout << "Выберите действие: " << endl;
		cout << "1. Заполненить структуру" << endl;
		cout << "2. Вывести структуру" << endl;
		cout << "3. Отсортировать структуру" << endl;
		cout << "4. Очистить консоль" << endl;
		cout << "Для выхода из программы введите 0" << endl << "> ";

		cin >> checker;
		switch (checker) {
		case(0):
			return 0;
		case(1):
			struct_filling(ms);
			break;
		case(2):
			outputting(ms, sz);
			break;
		case(3):
			sorting(ms, sz);
			break;
		case(4):
			system("cls");
			break;
		default:
			cout << "Введено неверное значение. Попробуйте ещё раз: ";
			break;
		}
	}

	//delete[] ms;


}