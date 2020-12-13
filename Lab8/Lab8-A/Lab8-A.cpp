#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<ctime>
#include<iostream>
#include<Windows.h>
#include<string>
#include<ctype.h>
using namespace std;

bool A[10];
int n = 10, temp = 0, num;

bool full1(bool z[]) {
	for (int i = 0; i < 5; ++i)
		if (z[i] == 0)return false;
	return true;
}

bool full2(bool z[]) {
	for (int i = 5; i < 10; ++i)
		if (z[i] == 0)return false;
	return true;
}

int main() {
	system("chcp 1251");
	system("cls");
	char ans[3];

	// Filling in array
	/*srand(time(0));
	for (int i = 0; i < 10; ++i) {
		if ((rand() % 10 + 1) % 2 == 0)A[i] = 0;
		else A[i] = 1;
	}*/

	// Main part
	while (true) {
		if (full1(A) && full2(A))
			break;
		printf("Вы курите? ");
		scanf("%3s", ans);
		if (ans[0] == '+' || ans[0] == 'д' && ans[1] == 'а' || ans[0] == 'Д' && ans[1] == 'а' || ans[0] == 'д' && ans[1] == 'А' || ans[0] == 'Д' && ans[1] == 'А') {
			temp = rand() % 4;

			// If place is empty
			if (!A[temp]) {
				A[temp] = 1;
				printf("Место номер %d было забронировано\n", temp + 1);
			}

			// If place isn't empty
			else {

				// Checking is one more free place
				if (full1(A))
					printf("Свободных мест в этой части нет\n");

				// Finding free place
				else {
					for (int i = 0; i < 5; ++i)
						if (!A[i]) {
							printf("Место номер %d было забронировано\n", i + 1);
							A[i] = 1;
							break;
						}
				}
			}
		}
		else {
			temp = rand() % 4 + 5;

			// If place if empty
			if (!A[temp]) {
				A[temp] = 1;
				printf("Место номер %d было забронировано\n", temp + 1);
			}

			// If place isn't empty
			else {

				// Checking is one more free place
				if (full2(A))
					printf("Свободных мест в этой части нет\n");

				// Finding free place
				else {
					for (int i = 5; i < 10; ++i)
						if (!A[i]) {
							printf("Место номер %d было забронировано\n", i + 1);
							A[i] = 1;
							break;
						}
				}
			}
		}
	}
}