#include <stdio.h>
#include<windows.h>
#include <cmath>
int main(void) {
    system("chcp 1251");
    system("cls");
    double x, y;
    printf("Введите координату x >");
    scanf_s("%lf", &x);
    printf("Введите координату y >");
    scanf_s("%lf", &y);
    printf("x=%6.3lf;  y=%6.3lf\n", x, y);
    if ((y >= 1 - x)
        && (x <= 1 && x >= -1 && fabs(x) <= fabs(y)))
        printf("Точка попадает в область\n");
    else printf("Точка не попадает в область\n");
    return 0;
}