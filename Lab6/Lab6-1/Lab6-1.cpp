#include <stdio.h>
#include <time.h>
#include <locale.h>
#include<cmath>
int main(void) {
    setlocale(LC_ALL, "Ru");
    srand(time(NULL));
    int min, max, n, a, i = 0;
    printf("Введите нижнюю границу числа: ");
    scanf_s("%d", &min);
    printf("Введите верхнюю границу числа: ");
    scanf_s("%d", &max);
    a = rand() % (max - min) + min;
    do {
        i += 1;
        printf("%d-я попытка\n", i);
        printf("Задумайте число: ");
        scanf_s("%d", &n);
        if (a < n) { printf("Меньше!\n"); continue; }
        if (a > n) { printf("Больше!\n"); continue; }
    } while (a != n);
    printf("Молодец! Угадано за %d попыток!\n", i);
    return(0);
}