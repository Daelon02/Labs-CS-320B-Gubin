#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
#include <windows.h>
int n, n1, A[20], sum, num, answer, num1;
int difers(int z) {
	int k = 1;
	z--;
	while (z > 0) {
		k *= 10;
		z--;
	}
	return k;
}
int main() {
	system("chcp 1251");
	system("cls");


	// Getting random number
	srand(time(0));
	n = rand() % 1000 + 1;
	scanf("%d", &n);
	n1 = n;
	int k = 0;

	printf("n = %d\n", n);

	// Counting sum
	while (n > 0) {
		sum += n % 10;
		n /= 10;
		num++;
	}
	n = n1, num1 = num;
	// Reverse number
	while (n > 0) {
		answer += (n % 10) * difers(num1);
		n /= 10;
		num1--;
	}
	// data outputting
	printf("Обратное число = %d\n", answer);
	printf("Номер точки = %d\n", num);

}