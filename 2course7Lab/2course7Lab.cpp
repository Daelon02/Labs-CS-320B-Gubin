#include "2course7Lab.h"




#define str_sz 15

using namespace std;




int sz = 0;

int main() {

	Space ms;


	int checker;

	while (true) {
		cout << "Выберите действие: " << endl;
		cout << "1. Ввод с экрана и запись в файл" << endl;
		cout << "2. Ввод случайным образом и запись в файл." << endl;
		cout << "3. Добавить запись в начало файла." << endl;
		cout << "4. Добавить запись в конец файла." << endl;
		cout << "5. Печать одной записи из файла по номеру." << endl;
		cout << "6. Печать всех записей из файла" << endl;
		cout << "7. Выйти из программы" << endl;
		cout << "8. Очистить консоль" << endl << "> ";

		cin >> checker;
		switch (checker) {
		case(0): {
			return 0;
		}
		case(1): {
			keyboard_filling();
			break;
		}
		case(2): {
			random_filling();

			cout << "Элементы, которые были добавлены:" << endl;
			outAll();

			break;
		}
		case(3): {
			toBegin();
			break;
		}
		case(4): {
			toTheEnd();
			break;
		}
		case(5): {
			cout << "Введите номер строки которую хотите получить >";
			int sz = 0, size;
			string str;
			cin >> size;
			ifstream file("file.txt");
			while (getline(file, str))
				sz++;
			while (size > sz || size < 0) {
				cout << "Вы ввели неверное значение попробуйте ещё раз" << endl << ">";
				cin >> size;
			}
			file.close();
			strOut(size);
		}
		case(6): {
			outAll();
			break;
		}
		case(7): {
			return 0;
		}
		case(8): {
			clean();
			break;
		}
		default: {
			cout << "Введено неверное значение. Попробуйте ещё раз: ";
			break;
		}
		}
	}

	//delete[] ms;


}