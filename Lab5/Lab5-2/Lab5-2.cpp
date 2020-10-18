#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
int main() {
	system("chcp 1251");
	system("cls");
	int k;
	scanf("%d", &k);
	if (k % 10 == 0 || k % 10 >= 5 || (k >= 11 && k <= 20))printf("У меня %d грибов\n", k);
	else 
		if (k % 10 == 1)printf("%d гриб\n", k);
	else 
			if (k % 10 == 2 || k % 10 == 3 || k % 10 == 4)printf("У меня %d гриба\n", k);
}