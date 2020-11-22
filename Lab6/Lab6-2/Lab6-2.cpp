#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<windows.h>
int num1, num2, k, mistakes, mark;
int main() {
	system("chcp 1251");
	system("cls");
	srand(time(0));
	for (int i = 0; i < 20; ++i) {
		num1 = rand() % 9 + 1;
		num2 = rand() % 9 + 1;
		printf("%d * %d = ", num1, num2);
		scanf("%d", &k);
		if (num1 * num2 != k)mistakes++;
	}
	if (mistakes > 4)mark = 1;
	else mark = 5 - mistakes;
	printf("Твоя оценка %d", mark);
}