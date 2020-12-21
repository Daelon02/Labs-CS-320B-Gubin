#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<ctime>
#define k 50
int n, m, A[50][50];
using namespace std;

void filling_in(int matrix[k][k], int x, int y) {
	for (int i = 0; i < x; ++i)
		for (int j = 0; j < y; ++j)
			matrix[i][j] = rand() % 20 - 10;
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j)
			printf("%3d ", matrix[i][j]);
		printf("\n");
	}
}

int pos_nums(int matrix[k][k], int x, int y, int pos) {
	int i = pos, ans = 0;
	for (int j = 0; j < y; ++j)
		if (matrix[i][j] > 0)ans++;
	return ans;
}

int main() {
	system("chcp 1251");
	system("cls");

	printf("Введите размерность массива. Введите ширину: ");
	scanf("%d", &n);
	printf("Введите высоту: ");
	scanf("%d", &m);

	filling_in(A, n, m);
	printf("\n\n\n");

	for (int i = 0; i < n; ++i)
		printf("%d\n", pos_nums(A, n, m, i));
}