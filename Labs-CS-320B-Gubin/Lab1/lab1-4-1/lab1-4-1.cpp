#include<cstdio>
#include<windows.h>

int main() {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	int a, b, c;
	a = 2;
	b = 3;
	printf("Числа не изменённые: %d, %d \n", a, b);
	c = a;
	a = b;
	b = c;
	printf("Числа изменились: %d, %d \n", a, b);
}