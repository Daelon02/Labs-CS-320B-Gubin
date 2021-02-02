#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<iomanip>
#include<cstring>
#include<Windows.h>
#include<stdio.h>
#include<ctime>
#include<utility>
#include<vector>
#include<array>
using namespace std;
int a, b, c, d;


struct FromDisp {
	std::array<double, 2> pull;
	int first;
};

void fromDisplay() {
	cout << "Введите числа для заполнения структуры" << endl;
	for (int i = 0; i < 5; i++) {
		cin << FromDisp.pull[i];
	}
};

struct Random {

};
void random() {

}

int main() {
	system("chcp 1251");
	system("cls");
	cout << "Меню для различного заполнения списка структур (1 – ввод с экрана, 2 – случайным образом), а также действия над структурами (3 – сортировка, 4 – печать): " << endl;
	cin >> a, b, c, d;
	if (a == 1) {
		fromDisplay();
	} else if (b == 2){
		random();
	  } else if (c == 3) {

	    }  else if (d == 4) {

	       }
	}
