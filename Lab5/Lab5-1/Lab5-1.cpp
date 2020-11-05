#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<cmath>
#include<Windows.h>
int main() {
	system("chcp 1251");
	system("cls");
	float a, b, c, dis, x1, x2;
	a = 1;
	b = 1;
	c = -2;
	printf("Введите значение a, b, c: ");
	scanf("%f %f %f", &a, &b, &c);
	dis = (b * b) - (4 * a * c);
	if (dis >= 0) {
		x1 = (-b + sqrt(dis)) / (2 * a);
		x2 = (-b - sqrt(dis)) / (2 * a);
		if (dis == 0)
			printf("Есть один корень уравнения: %f", x1);
		else
			printf("Есть 2 корня уравнения:\n%f\n%f", x1, x2);
	}
	else
		printf("Корней уравнения нет");
	return 0;
}