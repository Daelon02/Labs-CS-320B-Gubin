#include <stdio.h>
#include <time.h>
#include <locale.h>
#include<cmath>
#include<windows.h>
int main(void) {
    system("chcp 1251");
    system("cls");
    srand(time(NULL));
    int n, a, i = 0;
    a = rand() % 10;
    do {
        i += 1;
        printf("%d-я попытка\n", i);
        printf("Числа в диапазоне от 0 до 9\n");
        printf("Введите число: ");
        scanf_s("%d", &n);
        if (a < n) { printf("Меньше!\n"); continue; }
        if (a > n) { printf("Больше!\n"); continue; }
    } while (a != n);
    printf("Молодец! Угадано за %d попыток!\n", i);
    return(0);
}