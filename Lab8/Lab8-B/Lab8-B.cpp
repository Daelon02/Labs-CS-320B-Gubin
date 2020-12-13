#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
#include<Windows.h>
#include<utility>

using namespace std;
int n, k, B[100], pos, t, C[200];
pair <int, bool>A[100];
char action;
int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	srand(time(0));

	printf("Введите количество элементов в массиве: ");
	scanf("%d", &n);
	while (n == 0) {
		printf("Введены некорректные данные. Попробуйте ещё раз: ");
		scanf("%d", &n);
	}

	// Adding elements in array
	printf("Введите элементы массива: ");
	for (int i = 0; i < n; ++i)
		scanf("%d", &A[i].first);

	// Checking action
	printf("Введите действие (+ если хотите добавить элементы, - если удалить) ");
	scanf("%s", &action);
	if (action == '+') {

		// Quantity elements to add action
		printf("Сколько элементов хотите добавить? ");
		scanf("%d", &k);

		// Filling in array for adding elements
		printf("Какие элементы хотите добавить? ");
		for (int i = 0; i < k; ++i)
			scanf("%d", &B[i]);

		// Place for elements
		printf("В какое место хотите вставить элементы? ");
		scanf("%d", &pos);
		while (pos > n) {
			printf("Введены некорректные данные. Попробуйте ещё раз: ");
			scanf("%d", &pos);
		}

		// Division part with adding to three parts
		// Creating new array is:
		// 1. Adding part original array to variable pos
		// 2. Adding array B to new array
		// 3. Adding residue of elements to new array
		pos--;
		int temp = 0, temp1 = 0;

		// 1.
		for (int i = 0; i < pos; ++i) {
			C[i] = A[temp1].first;
			temp1++;
		}

		// 2.
		for (int i = pos; i < pos + k; ++i) {
			C[i] = B[temp];
			temp++;
		}

		// 3.
		for (int i = pos + k; i < k + n; ++i) {
			C[i] = A[temp1].first;
			temp1++;
		}

		// Outputting
		for (int i = 0; i < n + k; ++i)
			printf("%d ", C[i]);
	}

	// Checking action
	else if (action == '-') {

		// Quantity elements to remove
		printf("Сколько элементов хотите удалить? ");
		scanf("%d", &k);

		// Place to begin removing
		printf("С какого элемента хотите начать удаление? ");
		scanf("%d", &pos);
		while (k > n) {
			printf("Введены некорректные данные. Попробуйте ещё раз: ");
			scanf("%d", &k);
		}

		// Definition corners of removing
		A[pos - 1].second = 1;
		A[pos + k - 2].second = 1;
		bool u1 = false, u2 = false;
		for (int i = pos - 1; i < pos + k - 2; ++i)
			A[i].second = 1;

		// Recreating array
		for (int i = 0; i < n; ++i) {
			if (A[i].second == 0) {
				B[t] = A[i].first;
				t++;
			}
		}

		//Outputting
		for (int i = 0; i < t; ++i)
			printf("%d ", B[i]);
	}
}