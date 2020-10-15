#include <stdio.h>
#include <math.h>
#include<windows.h>

int main()
{
	system("chcp 1251");
	system("cls");
	double a, b, c;
	double s, p;
	printf("Write side A triangle ABC:");
	scanf_s("%lf", &a);
	system("cls");
	printf("\n Write side B triangle ABC:");
	scanf_s("%lf", &b);
	system("cls");
	printf("\n Write side C triangle ABC:");
	scanf_s("%lf", &c);
	system("cls");
	p = (a + b + c) / 2;
	printf("p = %lf \n", p);
	s = sqrt(p * (p - a) * (p - b) * (p - c));
	printf("s = %lf", s);

}
