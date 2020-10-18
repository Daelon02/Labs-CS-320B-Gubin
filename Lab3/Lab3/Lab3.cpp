#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
#include<windows.h>

using namespace std;
int main(void) {
	system("chcp 1251");
	system("cls");
	float t1, t2, a, c = 2, b, d = 1, x, y, ax;
	printf("Enter x, y, a, b >");
	scanf("%f %f %f %f", &x, &y, &a, &b);
	t1 = b/(a - b) * (b + x) - a/((a - b) * (a - b)) * log10( a + x/b + x);
	ax = a * x;
	t2 = c/a * (log10( tan( ax/d) - c/sin( ax)));
	printf("t1 = %lg\n", t1);
	printf("t2 = %lg\n", t2);
	return 0;
}