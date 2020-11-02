#include <stdio.h>
#include<windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    printf("*** Программа конвертирует значения в 1-битовое число ***\n");
    int right = 0, result;
    int a, b, c, d, e, f, g, h;
    do {
        printf("Введите 8 челочисленных значений [ 0 или 1]\n");
        printf("для формирования 1-бaйтового типа: ");

        scanf_s("%d %d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &g, &h);
        if ((a < 0 || a > 1) || (b < 0 || b > 1) || (c < 0 || c > 1) ||
            (d < 0 || d > 1) || (e < 0 || e > 1) || (f < 0 || f > 1) ||
            (g < 0 || g > 1) || (h < 0 || h > 1)) {
            printf("Значения должны быть 1 или 0\n\n");
        }
        else right = 1;
    } while (!right);

    printf("Получены значения: %d %d %d %d %d %d %d %d\n",
        h, 
        g, f, e, d, c, b, a);
    printf("\n*** Cмещение начинается с самого крайнего правого значения***\n\n");
    result = 0;
    printf("До смещения результат равен: %d\n", result);
    result |= a << 0;
    result |= b << 1;
    result |= c << 2;
    result |= d << 3;
    result |= e << 4;
    result |= f << 5;
    result |= g << 6;
    result |= h << 7;
    printf("После смещения результат равен: %d\n", result);

    return 0;
}