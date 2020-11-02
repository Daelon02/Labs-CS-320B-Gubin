#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include<windows.h>
#include <cmath>
int main(void) {
    system("chcp 1251");
    system("cls");
    double x = 0, y;
    printf("Введите координату x >");
    scanf("%lf", &x);
    printf("Введите координату y >");
    scanf("%lf", &y);
    //printf("x=%6.3lf;  y=%6.3lf\n", x, y);
    if (x < -1 || x>1 || y < -1 || y>1 || abs(x) > abs(y))
        printf("Точка не попадает в область\n");
    else
        printf("Точка попадает в область\n");
    return 0;
}