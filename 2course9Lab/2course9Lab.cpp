#include "StructList.h"
#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
using namespace std;

int main() {
	setlocale(LC_ALL, "RUSSIAN");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);
	List* list = NULL;
	int count = 0;
dd:
	int n = 0;
	system("cls");
	cout << "Меню: " << endl;
	cout << "1.Создание списка." << endl;
	cout << "2.Печать списка с начала." << endl;
	cout << "3.Печать списка с конца." << endl;
	cout << "4.Поиск по критерию с начала списка." << endl;
	cout << "5.Поиск по критерию с конца списка." << endl;
	cout << "6.Добавление элемента." << endl;
	cout << "7.Удаление  любого элемента." << endl;
	cout << "8.Сортировка." << endl;
	cout << "9.Запись списка в файл." << endl;
	cout << "10.Печать нового списка из файла." << endl;
	cout << "11. Выход из программы." << endl;
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
			goto dd;
		}
		list->PrintStart();
		break;
	case 3:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto dd;
		}
		list->PrintEnd();
		break;
	case 4:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto dd;
		}
		list->SearchStart();
		break;
	case 5:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto dd;
		}
		list->SearchEnd();
		break;
	case 6:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto dd;
		}
		list->Adding();
		break;
	case 7:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto dd;
		}
		list->Deleting();
		break;
	case 8:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto dd;
		}
		list->Sorting();
		break;
	case 9:
		if (list == NULL) {
			system("cls");
			cout << "Необходимо ввести данные элементов!" << endl;
			system("pause");
			goto dd;
		}
		list->PrintFile();
		break;
	case 10:
		list = new List();
		list->ReadFile();
		break;
	case 11:
		return 0;
		break;
	default:
		cout << "Неверное значение";
		goto dd;
		break;
	}
	goto dd;
}
