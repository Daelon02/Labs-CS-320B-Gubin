#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<iostream>
#include<ctime>
using namespace std;
int n, m, o, p, checker = 0, A[50][50], B[50][50], C[50][50];
int main() {
	system("chcp 1251");
	system("cls");

	printf("Вы хотите ввести массив с клавиатуры? Введите 1, если хотите, или 2, если нет: ");
	scanf("%d", &checker);
	while (checker != 1 && checker != 2) {
		printf("Вы ввели неправильный номер. Попробуй еще раз: ");
		scanf("%d", &checker);
	}
	if (checker == 1) {
		printf("Введите первый размер матрицы (все размеры должны быть меньше 30) \n Введите высоту: ");
		scanf("%d", &m);
		printf("Введите ширину: ");
		scanf("%d", &n);
		printf("Введите второй размер матрицы (все размеры должны быть меньше 30) \n Введите высоту: ");
		scanf("%d", &o);
		printf("\nВведите ширину: ");
		scanf("%d", &p);
		while (n != o || m > 30 || n > 30 || o > 30 || p > 30) {
			printf("Вы ввели неправильные размеры. Повторите попытку \ nВведите первый размер матрицы (все размеры должны быть меньше 30) \nВведите высоту: ");
			scanf("%d", &m);
			printf("Введите ширину: ");
			scanf("%d", &n);
			printf("Введите второй размер матрицы (все размеры должны быть меньше 30) \nВведите высоту: ");
			scanf("%d", &o);
			printf("Введите ширину: ");
			scanf("%d", &p);
		}
		printf("Введите первые элементы массива: ");
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				scanf("%d", &A[i][j]);
		printf("Введите вторые элементы массива: ");
		for (int i = 0; i < o; ++i)
			for (int j = 0; j < p; ++j)
				scanf("%d", &B[i][j]);
	}
	else {
		srand(time(0));
		m = rand() % 4 + 1;
		n = rand() % 4 + 1;
		o = n;
		p = rand() % 4 + 1;
		printf("Формирование размера матрицы:\nm = %d\nn = %d\no = %d\np = %d\n", m, n, o, p);
		for (int i = 0; i < m; i++)
			for (int j = 0; j < n; j++)
				A[i][j] = rand() % 2 + 1;
		for (int i = 0; i < o; i++)
			for (int j = 0; j < p; ++j)
				B[i][j] = rand() % 2 + 1;
		printf("Первая матрица, которая у нас есть:\n");
		for (int i = 0; i < m; ++i) {
			for (int j = 0; j < n; ++j)
				printf("%d ", A[i][j]);
			printf("\n");
		}
		printf("Вторая матрица, которая у нас есть:\n");
		for (int i = 0; i < o; ++i) {
			for (int j = 0; j < p; ++j)
				printf("%d ", B[i][j]);
			printf("\n");
		}
	}
	// Starting calculate

	int k = 0;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < p; ++j) {
			while (k != m) {
				C[i][j] += A[i][k] * B[k][j];
				k++;
			}
			k = 0;
		}
	}

	cout << "Результат: " << endl;
	for (int i = 0; i < m; ++i) {
		for (int j = 0; j < p; ++j)
			printf("%d ", C[i][j]);
		printf("\n");
	}
}