#define _CRT_SECURE_NO_WARNINGS
#define PI 3.14159265358979323846
#include<stdio.h>
#include<cmath>
#include<windows.h>

using namespace std;
int main(void) {
	system("chcp 1251");
	system("cls");
	double t1, t2, x = 2, y = 3, ax;
	double a = 12.5, b = 1.3;
	double c = 1, d = 2;
	printf("Enter x, y > \n");
	//scanf("%lf %lf", &x, &y);
	t1 = b/(a - b) * (b + x) - a/((a - b) * (a - b)) * log10( a + x/b + x);
	ax = (a * x);
	t2 = 1 / a * (log10((tan(ax / 2) * PI / 180) - 1 / (sin(ax) * PI / 180)));
	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
	return 0;
}