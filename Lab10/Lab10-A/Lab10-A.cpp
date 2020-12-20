#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<ctime>
char comparative(int x, int y) {
	if (x == y)
		return '=';
	else if (x > y)
		return '>';
	else
		return '<';
}
using namespace std;
int main() {
	    system("chcp 1251");
    system("cls");
	int a, b, checker;
	printf("Вы хотите ввести номера с клавиатуры? Напишите 1 (да) или 0 (нет): ");
	scanf("%d", &checker);
	while (checker != 1 && checker != 0) {
		printf("Вы ввели некорректное число, введите ещё раз: ");
		scanf("%d", &checker);
	}
	if (checker == 1) {
		printf("Введите первое число: ");
		scanf("%d", &a);
		printf("Введите второе число: ");
		scanf("%d", &b);
	}
	else {
		srand(time(0));
		a = rand() % 10 + 1;
		b = rand() % 10 + 1;
		printf("a = %d\nb = %d\n", a, b);
	}
	printf("%c", comparative(a, b));
}