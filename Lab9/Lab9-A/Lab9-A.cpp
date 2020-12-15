#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<ctime>
#include<stdlib.h>
#include<algorithm>
using namespace std;
int main() {
	system("chcp 1251");
	system("cls");

	printf("Вы хотите ввести массив с клавиатуры? Введите 1, если хотите, или 0, если нет: ");
	int checker;
	scanf("%d", &checker);
	while (checker != 1 && checker != 0) {
		printf("Вы ввели неправильный номер. Попробуй еще раз: ");
		scanf("%d", &checker);
	}
	int n, m, A[20][20];
	if (checker == 1) {
		printf("Введите высоту массива (менее 20): ");
		scanf("%d", &n);
		printf("Введите ширину массива (менее 20): ");
		scanf("%d", &m);
		while (n <= 0 && n > 20 || m >= 0 && m > 20) {
			printf("Вы ввели неверные данные. Попробуйте снова\n");
			printf("Введите высоту массива (менее 20): ");
			scanf("%d", &n);
			printf("Введите ширину массива (менее 20): ");
			scanf("%d", &m);
		}
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				scanf("%d", A[i][j]);
	}
	else {
		srand(time(0));
		n = rand() % 5 + 1;
		m = rand() % 5 + 1;
		for (int i = 0; i < n; ++i)
			for (int j = 0; j < m; ++j)
				A[i][j] = rand() % 50 + 1;
		printf("Высота =%d \n Ширина =%d \n Массив: \n", n, m);
		for (int i = 0; i < n; ++i) {
			for (int j = 0; j < m; ++j)
				printf("%d ", A[i][j]);
			printf("\n");
		}
	}
	// Outputting original array

	printf("\n\n\n Оригинальный массив:\n");
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	// Copying array A to array B

	int mx = INT_MIN, pos = 0, B[20][20];
	for (int i = 0; i < n; ++i)
		for (int j = 0; j < m; ++j)
			B[i][j] = A[i][j];
	//Counting array A

	for (int i = 0; i < n; ++i) {
		mx = INT_MIN;
		for (int j = 0; j < m; ++j) {
			if (A[i][j] > mx) {
				pos = j;
				mx = A[i][j];
			}
		}
		swap(A[i][pos], A[i][0]);
	}
	// Outputting array A

	printf("\nМассив A:\n");
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			printf("%d ", A[i][j]);
		printf("\n");
	}
	//Counting array B
	int pos_i = 0, pos_j = 0;
	int mn = INT_MAX;
	for (int j = 0; j < m; ++j) {
		for (int i = 0; i < n; ++i) {
			if (B[i][j] < mn) {
				mn = B[i][j];
				pos = i;
			}
		}
		//printf("\n%d %d %d\n", mn, pos_i, pos_j);
		swap(B[pos][j], B[n - 1][j]);
		mn = INT_MAX;
	}
	// Outputting array B

	printf("\nМассив B:\n");
	for (int i = 0; i < n; ++i) {
		for (int j = 0; j < m; ++j)
			printf("%d ", B[i][j]);
		printf("\n");
	}
}