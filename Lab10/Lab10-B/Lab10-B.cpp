#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<stdio.h>
#include<ctime>
using namespace std;
float B[15][15], C[100], * ans;
int A[100];
float* func(int* z, int x, int y) {
	int k = 0, t = 0;
	// Array to matrix

	for (int i = 1; i <= x * y; ++i) {
		B[k][t] = z[i - 1];
		t++;
		if (i % y == 0) {
			k++;
			t = 0;
		}
	}
	// Matrix multiplication

	double avg = 0, sum = 0;
	for (int i = 0; i < x; ++i) {
		for (int j = 0; j < y; ++j)
			sum += B[i][j];
		avg = sum / y;
		for (int j = 0; j < y; ++j)
			B[i][j] *= avg;
		sum = 0;
	}
	// Matrix to array
	k = 0;
	t = 0;
	for (int i = 1; i <= x * y; ++i) {
		C[i - 1] = B[k][t];
		t++;
		if (i % y == 0) {
			t = 0;
			k++;
		}
	}

	// Array returning
	return C;
}
int main() {
	printf("Do you want to enter array from keyboard? Enter either 1 or 0 (yes or no respectively): ");
	int n, m, checker, checker1;
	// Array inputting

	scanf("%d", &checker);
	srand(time(0));
	while (checker != 1 && checker != 0) {
		printf("You've entered incorrect data. Try again: ");
		scanf("%d", &checker);
	}
	if (checker == 1) {
		printf("Enter n: ");
		scanf("%d", &n);
		printf("Enter m: ");
		scanf("%d", &m);
		printf("Enter elememts of array: ");
		for (int i = 0; i < n * m; ++i)
			scanf("%d", &A[i]);
	}
	else {
		printf("Do you want to enter matrix size? Enter either 1 or 0 (yes or no respectively): ");
		scanf("%d", &checker1);
		while (checker1 != 1 && checker1 != 0) {
			printf("You've entered incorrect data. Try again: ");
			scanf("%d", &checker1);
		}
		if (checker1 == 1) {
			printf("Enter n (less than 20): ");
			scanf("%d", &n);
			printf("Enter m (less than 20): ");
			scanf("%d", &m);
			while (n <= 0 && n > 20 || m <= 0 && m > 0) {
				printf("You've entered incorrect data. Try again.\n");
				printf("Enter n (less than 20): ");
				scanf("%d", &n);
				printf("Enter m (less than 20): ");
				scanf("%d", &m);
			}
		}
		else {
			printf("OK. Sizes are:\n");
			n = rand() % 5 + 1;
			m = rand() % 5 + 1;
			printf("n = %d\nm = %d\n", n, m);
		}
		for (int i = 0; i < n * m; i++)
			A[i] = rand() % 15 + 1;
	}
	// Original array ouputting

	printf("Original array:\n");
	for (int i = 0; i < n * m; ++i)
		printf("%d ", A[i]);
	printf("\n");
	// Outputting ans array

	ans = func(A, n, m);
	printf("Output:\n");
	for (int i = 0; i < m * n; i++)
		printf("%f ", ans[i]);
}