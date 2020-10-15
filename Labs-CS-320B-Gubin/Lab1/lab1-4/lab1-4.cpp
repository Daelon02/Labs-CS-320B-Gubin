#include<cstdio>
#include<windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a = 2;
	int b = 6;
	printf("Числа не изменённые: %d, %d \n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("Числа изменились: %d, %d \n", a, b);
}