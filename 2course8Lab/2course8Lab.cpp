# include "StructList.h"
# include <iostream>
# include <fstream>
# include <iomanip>
# include <Windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	List* list = NULL;
	int count = 0;
d:
	int n = 0;
	system("cls");
	cout << "Меню: " << endl;
	cout << "1.Создание списка." << endl;
	cout << "2.Печать списка." << endl;
	cout << "3.Поиск по критерию." << endl;
	cout << "4.Добавление элемента." << endl;
	cout << "5.Удаление любого элемента." << endl;
	cout << "6.Сортировка." << endl;
	cout << "7.Запись списка в файл." << endl;
	cout << "8.Печать списка из файла." << endl;
	cout << "9.Выход из программы." << endl;
	cout << "Ввод: ";
	cin >> n;

	switch (n) {
	case 1:
		list = new List();
		list->CreatList();
		break;
	case 2:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto d;
		}
		list->PrintCons();
		break;
	case 3:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto d;
		}
		list->Search();
		break;
	case 4:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto d;
		}
		list->Add();
		break;
	case 5:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto d;
		}
		list->Deleting();
		break;
	case 6:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto d;
		}
		list->Sort();
		break;
	case 7:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto d;
		}
		list->PrintFile();
		break;
	case 8:
		list = new List();
		list->ReadFile();
		break;
	case 9:
		return 0;
		break;
	default:
		cout << "Неверное значение";
		goto d;
		break;
	}
	goto d;
}
