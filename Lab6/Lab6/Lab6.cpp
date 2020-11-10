#include <stdio.h>
#include<Windows.h>
#include <cmath>
int main(void) {
    system("chcp 1251");
    system("cls");
    int n;
    double dbln, sum = 0, term;
    const double eps = 0.00001;
    short k1 = 1;
    for (n = 0; ; n++, k1 = -k1) {
        dbln = n;
        term = (pow(-1, dbln)) * (((dbln * dbln) + 1) / ((dbln * dbln * dbln) + 3));
        if (abs(term) >= eps)
            sum += term;
        else {
            break;
        }

        if (n == 9)
            printf("Сумма 10 членов ряда - %10.7lf\n", sum);
    }
    printf("Полная сумма ряда - %10.7lf\n", sum);
    return 0;
}