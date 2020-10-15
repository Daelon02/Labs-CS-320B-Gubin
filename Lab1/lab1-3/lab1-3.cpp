#include <stdio.h>
#include<windows.h>
int main()
{
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	float a, b, c, d;
	printf("Введите число:\n");
	scanf_s("%f", &a);
	b = a * a;
	c = b * b;
	d = c * c;
	printf("Число в 8-ой степени: d=%f\n", d);
	return 0;
}