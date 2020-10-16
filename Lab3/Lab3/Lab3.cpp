#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#include<windows.h>

using namespace std;
int main(void) {
	system("chcp 1251");
	system("cls");
	int a, c;
	a = 4;
	double b = 3, d = 2, result;
	result = pow(a - b, d);
	double x, y, ax;
	double t1, t2;
	c = 1;
	d = 2;
	b = 0;
	printf("Enter x, y >");
	scanf("%lf %lf", &x, &y);
	t1 = b/(a - b) * (b = x) - a/(a - b) * result * log10( a + x/b + x);
	ax = a * x;
	t2 = c/a * (log10( tan( ax/d) - c/sin( ax)));
	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
	return 0;
}