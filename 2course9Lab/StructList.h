#pragma once
#include <iostream>
#include <fstream>
#include <iomanip>
#include <Windows.h>
#include "StructDetail.h"
using namespace std;

struct List {
private:
	DETAIL* start = NULL;
	DETAIL* end = NULL;
public:
	int GetSize() {
		int count = 0;
		DETAIL* cur = start;
		while (cur != NULL) {
			count++;
			cur = cur->next;
		}
		return count;
	}
	void CreatList() {
	p:
		system("cls");
		int count = 0;
		cout << "Введите количество элементов: ";
		cin >> count;
		if (count < 1) {
			cout << "Количество єлементов должно быть больше 0!" << endl;
			goto p;
		}
		start = new DETAIL();
		end = start;
		for (int i = 0; i < count; i++) {
			cout << endl << "Введите наименование детали: ";
			cin >> end->name;
			cout << endl << "Тип детали: ";
			cin >> end->type;
			cout << endl << "Количество деталей: ";
			cin >> end->quantity;
			cout << endl << "Вес детали: ";
			cin >> end->part_weight;
			if (i != count - 1) {
				end->next = new DETAIL();
				end->next->prev = end;
				end = end->next;
			}
		}

		system("cls");
		cout << "Данные успешно введены! " << endl;
		system("pause");
	}
	void PrintStart() {
		DETAIL* cur = start;
		system("cls");
		cout << "|-----------------------------------------------------------------------------------------------|" << endl;
		cout << "| Ведомость деталей                                                                             |" << endl;
		cout << "|-----------------------------------------------------------------------------------------------|" << endl;
		cout << "|  №   | Наименование       | Тип           | Количество              | Вес 1 детали (г)        |" << endl;
		cout << "|------|--------------------|---------------|-------------------------|-------------------------|" << endl;
		int i = 0;
		while (cur != NULL) {

			cout << "| " << setw(3) << i++ << ". |" << setw(10) << cur->name << setw(11) << "|" << setw(8) << cur->type << setw(8) << "|" << setw(13) << cur->quantity << setw(13) << "|" << setw(13) << cur->part_weight << setw(13) << "|" << endl;
			cur = cur->next;
		}
		cout << "|-----------------------------------------------------------------------------------------------|" << endl;
		cout << "|Примечание: принято такое кодирование типов: О - оригинальная, П - покупная, З - заимствованная|" << endl;
		cout << "|-----------------------------------------------------------------------------------------------|" << endl;
		system("pause");
	}
	void PrintEnd() {
		DETAIL* cur = end;
		system("cls");
		cout << "|-----------------------------------------------------------------------------------------------|" << endl;
		cout << "| Ведомость деталей                                                                             |" << endl;
		cout << "|-----------------------------------------------------------------------------------------------|" << endl;
		cout << "|  №   | Наименование       | Тип           | Количество              | Вес 1 детали (г)        |" << endl;
		cout << "|------|--------------------|---------------|-------------------------|-------------------------|" << endl;
		int i = 0;
		while (cur != NULL) {

			cout << "| " << setw(3) << i++ << ". |" << setw(10) << cur->name << setw(11) << "|" << setw(8) << cur->type << setw(8) << "|" << setw(13) << cur->quantity << setw(13) << "|" << setw(13) << cur->part_weight << setw(13) << "|" << endl;
			cur = cur->prev;
		}
		cout << "|-----------------------------------------------------------------------------------------------|" << endl;
		cout << "|Примечание: принято такое кодирование типов: О - оригинальная, П - покупная, З - заимствованная|" << endl;
		cout << "|-----------------------------------------------------------------------------------------------|" << endl;
		system("pause");
	}
	void SearchStart() {
		int count = GetSize();
		int n = 0;
	k:
		system("cls");
		cout << "Поиск:" << endl;
		cout << "1.По номеру." << endl;
		cout << "2.По наименованию." << endl;
		cout << "3.По типу деталей." << endl;
		cout << "4.По количеству." << endl;
		cout << "5.По весу одной детали." << endl;
		cout << "0.Выход." << endl;
		cout << "Ввод: ";
		cin >> n;
		cout << endl;
		int m = 0;
		string Type = "";
		float time = 0;
		string outp;
		DETAIL** TEMP = new DETAIL * [count];
		int temp = 0;
		DETAIL* cur = start;
		switch (n) {
		case 1:
		g:
			system("cls");
			cout << "Введите номер  элемента который хотите найти: ";
			cin >> m;
			if (m < 0 || m >= count) {
				cout << "Некоректно введеный номер!";
				goto g;
			}
			cur = start;
			for (int i = 0; i < m; i++) {
				cur = cur->next;
			}
			system("cls");
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "| Ведомость деталей                                                                             |" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "|  №   | Наименование       | Тип           | Количество              | Вес 1 детали (г)        |" << endl;
			cout << "|------|--------------------|---------------|-------------------------|-------------------------|" << endl;
			cout << "| " << setw(3) << m << ". |" << setw(10) << cur->name << setw(11) << "|" << setw(8) << cur->type << setw(8) << "|" << setw(13) << cur->quantity << setw(13) << "|" << setw(13) << cur->part_weight << setw(13) << "|" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "|Примечание: принято такое кодирование типов: О - оригинальная, П - покупная, З - заимствованная|" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			system("pause");
			return;
			break;
		case 2:
			system("cls");
			cout << "Введите наименование детали: ";
			cin >> outp;
			cur = start;
			while (cur != NULL) {
				if (outp == cur->name)
					TEMP[temp++] = cur;
				cur = cur->next;
			}
			break;
		case 3:
			system("cls");
			cout << "Введите тип детали: ";
			cin >> Type;

			while (cur != NULL) {
				if (Type == cur->type)
					TEMP[temp++] = cur;
				cur = cur->next;
			}
			break;
		case 4:
			system("cls");
			cout << "Введите количество деталей: ";
			cin >> time;
			while (cur != NULL) {
				if (time == cur->quantity)
					TEMP[temp++] = cur;
				cur = cur->next;
			}
			break;
		case 5:
			system("cls");
			cout << "Введите вес детали: ";
			cin >> time;
			while (cur != NULL) {
				if (time == cur->part_weight)
					TEMP[temp++] = cur;
				cur = cur->next;
			}
			break;
		case 0:
			return;
		default:
			cout << "Неверное значение." << endl;
			break;
			goto g;
		}
		if (temp == 0)
			cout << "Элементов с заданым значением не найдено!" << endl;
		else {
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "|  №   | Наименование       | Тип           | Количество              | Вес 1 детали (г)        |" << endl;
			cout << "|------|--------------------|---------------|-------------------------|-------------------------|" << endl;

			for (int i = 0; i < temp; i++)
				cout << "| " << setw(3) << i << ". |" << setw(10) << TEMP[i]->name << setw(11) << "|" << setw(8) << TEMP[i]->type << setw(8) << "|" << setw(13) << TEMP[i]->quantity << setw(13) << "|" << setw(13) << TEMP[i]->part_weight << setw(13) << "|" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "|Примечание: принято такое кодирование типов: О - оригинальная, П - покупная, З - заимствованная|" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;

		}
		system("pause");
		return;
	}
	void SearchEnd() {
		int count = GetSize();
		int n = 0;
	k:
		system("cls");
		cout << "Поиск:" << endl;
		cout << "1.По номеру." << endl;
		cout << "2.По наименованию." << endl;
		cout << "3.По типу деталей." << endl;
		cout << "4.По количеству." << endl;
		cout << "5.По весу одной детали." << endl;
		cout << "0.Выход." << endl;
		cout << "Ввод: ";
		cin >> n;
		cout << endl;
		int m = 0;
		string Type = "";
		float time = 0;
		string outp;
		DETAIL** TEMP = new DETAIL * [count];
		int temp = 0;
		DETAIL* cur = end;
		switch (n) {
		case 1:
		g:
			system("cls");
			cout << "Введите номер  элемента который хотите найти: ";
			cin >> m;
			if (m < 0 || m >= count) {
				cout << "Некоректно введеный номер!";
				goto g;
			}
			cur = end;
			for (int i = 0; i < m; i++) {
				cur = cur->prev;
			}
			system("cls");
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "| Ведомость деталей                                                                             |" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "|  №   | Наименование       | Тип           | Количество              | Вес 1 детали (г)        |" << endl;
			cout << "|------|--------------------|---------------|-------------------------|-------------------------|" << endl;
			cout << "| " << setw(3) << m << ". |" << setw(10) << cur->name << setw(11) << "|" << setw(8) << cur->type << setw(8) << "|" << setw(13) << cur->quantity << setw(13) << "|" << setw(13) << cur->part_weight << setw(13) << "|" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "|Примечание: принято такое кодирование типов: О - оригинальная, П - покупная, З - заимствованная|" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			system("pause");
			return;
			break;
		case 2:
			system("cls");
			cout << "Введите наименование детали: ";
			cin >> outp;
			cur = end;
			while (cur != NULL) {
				if (outp == cur->name)
					TEMP[temp++] = cur;
				cur = cur->prev;
			}
			break;
		case 3:
			system("cls");
			cout << "Введите тип детали: ";
			cin >> Type;

			while (cur != NULL) {
				if (Type == cur->type)
					TEMP[temp++] = cur;
				cur = cur->prev;
			}
			break;
		case 4:
			system("cls");
			cout << "Введите количество деталей: ";
			cin >> time;
			while (cur != NULL) {
				if (time == cur->quantity)
					TEMP[temp++] = cur;
				cur = cur->prev;
			}
			break;
		case 5:
			system("cls");
			cout << "Введите вес детали: ";
			cin >> time;
			while (cur != NULL) {
				if (time == cur->part_weight)
					TEMP[temp++] = cur;
				cur = cur->prev;
			}
			break;
		case 0:
			return;
		default:
			cout << "Неверное значение." << endl;
			break;
			goto g;
		}
		if (temp == 0)
			cout << "Элементов с заданым значением не найдено!" << endl;
		else {
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "|  №   | Наименование       | Тип           | Количество              | Вес 1 детали (г)        |" << endl;
			cout << "|------|--------------------|---------------|-------------------------|-------------------------|" << endl;

			for (int i = 0; i < temp; i++)
				cout << "| " << setw(3) << i << ". |" << setw(10) << TEMP[i]->name << setw(11) << "|" << setw(8) << TEMP[i]->type << setw(8) << "|" << setw(13) << TEMP[i]->quantity << setw(13) << "|" << setw(13) << TEMP[i]->part_weight << setw(13) << "|" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;
			cout << "|Примечание: принято такое кодирование типов: О - оригинальная, П - покупная, З - заимствованная|" << endl;
			cout << "|-----------------------------------------------------------------------------------------------|" << endl;

		}
		system("pause");
		return;
	}
	void Adding() {
		DETAIL* cur = start;
		int count = GetSize();
		int n = 0;
	h:
		system("cls");
		cout << "Введите номер добавляемого элемента: ";
		cin >> n;
		cout << endl;
		if (n > (count) || n < 0) {
			system("cls");
			cout << "Неверно введен номер элемента!" << endl;
			system("pause");
			goto h;
		}
		for (int i = 0; i < n - 1; i++) {
			cur = cur->next;
		}
		DETAIL* temp = new DETAIL();
		cout << endl << "Введите наименование детали: ";
		cin >> temp->name;
		cout << endl << "Тип детали: ";
		cin >> temp->type;
		cout << endl << "Количество деталей: ";
		cin >> temp->quantity;
		cout << endl << "Вес детали: ";
		cin >> temp->part_weight;
		if (n == count) {
			end->next = temp;
			end = temp;
		}
		else if (n == 0) {
			start->prev = temp;
			temp->next = start;
			start = temp;
		}
		else {
			DETAIL* cur = start;
			for (int i = 0; i < n - 1; i++) {
				cur = cur->next;
			}
			temp->prev = cur->prev;
			temp->next = cur->next;
			cur->next->prev = temp;
			cur->next = temp;

		}
		system("cls");
		cout << "Элемент успешно добавлен! " << endl;
		system("pause");
		return;
	}
	void Deleting() {
		DETAIL* cur = start;
		int count = GetSize();
		int n;
	h:
		system("cls");
		cout << "Введите номер удаляемого элемента: ";
		cin >> n;
		cout << endl;
		if (n > (count - 1) || n < 0) {
			cout << "Неверно введен номер элемента!" << endl;
			goto h;
		}
		if (n == 0) {
			start = start->next;
			if (start != NULL)
				start->prev = NULL;
		}
		else if (n == count - 1) {
			end = end->prev;
			end->next = NULL;
		}
		else {
			for (int i = 0; i < n; i++) {
				cur = cur->next;
			}
			cur->next->prev = cur->prev;
			cur->prev->next = cur->next;
			cout << 9;
		}
		system("cls");
		cout << "Элемент успешно удален! " << endl;
		system("pause");
		return;
	}
	void PrintFile() {
		ofstream fout("Output.txt");
		DETAIL* cur = start;
		while (cur != NULL) {
			fout << "  " << cur->name << "  " << cur->type << "  " << cur->quantity << "  " << cur->part_weight << "  " << endl;
			cur = cur->next;
		}
		system("cls");
		cout << "Данные успешно записаны в файл \"Output.txt\"." << endl;
		system("PAUSE");
	}
	void ReadFile() {
		start = new DETAIL();
		end = NULL;
		ifstream fin("MasStruct.txt");
		while (!fin.eof()) {
			if (end == NULL)
				end = start;
			else {
				end->next = new DETAIL();
				end->next->prev = end;
				end = end->next;
			}
			fin >> end->name;
			fin >> end->type;
			fin >> end->quantity;
			fin >> end->part_weight;
		}
		system("cls");
		cout << "Данные успешно выведены из файла \"MasStruct.txt\"!" << endl;
		system("PAUSE");
	}
	void Sorting() {
		int n = 0;
	k:
		system("cls");
		cout << "Сортировка:" << endl;
		cout << "1.По наименованию." << endl;
		cout << "2.По типу деталей." << endl;
		cout << "3.По количеству." << endl;
		cout << "4.По весу одной детали." << endl;
		cout << "0.Выход." << endl;
		cin >> n;
		int p = 0;
		bool vse = false;
		DETAIL* cur;
		switch (n) {
		case 1:
			vse = true;
			while (vse) {
				vse = false;
				cur = start;
				if (strcmp(cur->name.c_str(), cur->next->name.c_str()) == 1) {
					DETAIL* temp = cur->next;
					cur->next = cur->next->next;
					temp->next->prev = cur;
					temp->prev = cur->prev;
					cur->prev = temp;
					temp->next = cur;
					start = temp;
					vse = true;
				}
				while (cur->next->next != NULL) {
					if (strcmp(cur->next->name.c_str(), cur->next->next->name.c_str()) == 1) {
						DETAIL* temp = cur->next->next;
						if (temp->next != NULL)
							temp->next->prev = temp->prev;
						cur->next->prev = temp;
						temp->prev = cur;
						cur->next->next = temp->next;
						temp->next = cur->next;
						cur->next = temp;
						vse = true;
					}
					cur = cur->next;
				}
				end = cur->next;
			}
			system("cls");
			cout << "Данные успешно отсортированы." << endl;
			system("PAUSE");
			break;
		case 2:
			vse = true;
			while (vse) {
				vse = false;
				cur = start;
				if (strcmp(cur->type.c_str(), cur->next->type.c_str()) == 1) {
					DETAIL* temp = cur->next;
					cur->next = cur->next->next;
					temp->next->prev = cur;
					temp->prev = cur->prev;
					cur->prev = temp;
					temp->next = cur;
					start = temp;
					vse = true;
				}
				while (cur->next->next != NULL) {
					if (strcmp(cur->next->type.c_str(), cur->next->next->type.c_str()) == 1) {
						DETAIL* temp = cur->next->next;
						if (temp->next != NULL)
							temp->next->prev = temp->prev;
						cur->next->prev = temp;
						temp->prev = cur;
						cur->next->next = temp->next;
						temp->next = cur->next;
						cur->next = temp;
						vse = true;
					}
					cur = cur->next;
				}
				end = cur->next;
			}
			system("cls");
			cout << "Данные успешно отсортированы." << endl;
			system("PAUSE");
			break;
		case 3:
		p2:
			system("cls");
			cout << "1.Сортировать по возрастанию." << endl << "2.По убыванию." << endl << "0.Выход" << endl << "Ввод: ";
			cin >> p;
			switch (p) {
			case 1:
				vse = true;
				while (vse) {
					vse = false;
					cur = start;
					if (cur->quantity > cur->next->quantity) {
						DETAIL* temp = cur->next;
						cur->next = cur->next->next;
						temp->next->prev = cur;
						temp->prev = cur->prev;
						cur->prev = temp;
						temp->next = cur;
						start = temp;
						vse = true;
					}
					while (cur->next->next != NULL) {
						if (cur->next->quantity > cur->next->next->quantity) {
							DETAIL* temp = cur->next->next;
							if (temp->next != NULL)
								temp->next->prev = temp->prev;
							cur->next->prev = temp;
							temp->prev = cur;
							cur->next->next = temp->next;
							temp->next = cur->next;
							cur->next = temp;
							vse = true;
						}
						cur = cur->next;
					}
					end = cur->next;
				}
				break;
			case 2:
				vse = true;
				while (vse) {
					vse = false;
					cur = start;
					if (cur->quantity < cur->next->quantity) {
						DETAIL* temp = cur->next;
						cur->next = cur->next->next;
						temp->next->prev = cur;
						temp->prev = cur->prev;
						cur->prev = temp;
						temp->next = cur;
						start = temp;
						vse = true;
					}
					while (cur->next->next != NULL) {
						if (cur->next->quantity < cur->next->next->quantity) {
							DETAIL* temp = cur->next->next;
							if (temp->next != NULL)
								temp->next->prev = temp->prev;
							cur->next->prev = temp;
							temp->prev = cur;
							cur->next->next = temp->next;
							temp->next = cur->next;
							cur->next = temp;
							vse = true;
						}
						cur = cur->next;
					}
					end = cur->next;
				}
				break;
			case 0:
				goto k;
				break;
			default:
				cout << "Неверное значение." << endl;
				break;
				goto p2;
			}
			system("cls");
			cout << "Данные успешно отсортированы." << endl;
			system("PAUSE");
			break;
		case 4:
		p3:
			system("cls");
			cout << "1.Сортировать по возрастанию." << endl << "2.По убыванию." << endl << "0.Выход" << endl << "Ввод: ";
			cin >> p;
			switch (p) {
			case 1:
				vse = true;
				while (vse) {
					vse = false;
					cur = start;
					if (cur->part_weight > cur->next->part_weight) {
						DETAIL* temp = cur->next;
						cur->next = cur->next->next;
						temp->next->prev = cur;
						temp->prev = cur->prev;
						cur->prev = temp;
						temp->next = cur;
						start = temp;
						vse = true;
					}
					while (cur->next->next != NULL) {
						if (cur->next->part_weight > cur->next->next->part_weight) {
							DETAIL* temp = cur->next->next;
							if (temp->next != NULL)
								temp->next->prev = temp->prev;
							cur->next->prev = temp;
							temp->prev = cur;
							cur->next->next = temp->next;
							temp->next = cur->next;
							cur->next = temp;
							vse = true;
						}
						cur = cur->next;
					}
					end = cur->next;
				}
				break;
			case 2:
				vse = true;
				while (vse) {
					vse = false;
					cur = start;
					if (cur->part_weight < cur->next->part_weight) {
						DETAIL* temp = cur->next;
						cur->next = cur->next->next;
						temp->next->prev = cur;
						temp->prev = cur->prev;
						cur->prev = temp;
						temp->next = cur;
						start = temp;
						vse = true;
					}
					while (cur->next->next != NULL) {
						if (cur->next->part_weight < cur->next->next->part_weight) {
							DETAIL* temp = cur->next->next;
							if (temp->next != NULL)
								temp->next->prev = temp->prev;
							cur->next->prev = temp;
							temp->prev = cur;
							cur->next->next = temp->next;
							temp->next = cur->next;
							cur->next = temp;
							vse = true;
						}
						cur = cur->next;
					}
					end = cur->next;
				}
				break;
			case 0:
				goto k;
				break;
			default:
				system("cls");
				cout << "Неверное значение." << endl;
				system("PAUSE");
				break;
				goto p3;
			}
			system("cls");
			cout << "Данные успешно отсортированы." << endl;
			system("PAUSE");
			break;
		case 0:
			return;
			break;
		default:
			cout << "Неверное значение." << endl;
			break;
			goto k;
		}
	}

};