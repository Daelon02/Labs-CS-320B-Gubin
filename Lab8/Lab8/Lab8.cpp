﻿#include <stdio.h>
#include <time.h>
#include <stdlib.h>
int Ar[100];   /* массив, который обрабатывается */

int main(void) {
    int i, j;    /* индексы в массиве */
    int av;      /* среднее значение */
    int nn; /* количество эл-тов в последовательности */
    int ib;      /* индекс начала последовательности */

    randomize();  /* инициализация rand */
    /* заполнение массива случайными числами */
    for (i = 0; i < 100; Ar[i++] = random(101) - 50);
    /* вывод начального массива */
    printf("Начальный массив:\n");
    for (i = 0; i < 100; printf("%3d  ", Ar[i++]));
    putchar('\n');
    putchar('\n');

    for (nn = i = 0; i < 100; i++) { /* перебор массива */
        if (Ar[i] < 0)
            /* обработка отрицательного элемента */
            if (!nn) {
                /* начало последовательности */
                /* запомнить индекс начала,
                   начальное значение накопителя суммы
                   и счетчика элементов */
                ib = i; av = Ar[i]; nn = 1;
            }
            else {
                /* накопление суммы,
                   подсчет количества */
                av += Ar[i]; nn++;
            }
        /* конец обработки отрицательного элемента */
        else /* обработка положительного элемента */
            if (nn) {
                /* если есть необработанная
                   отрицательная последовательность */
                av /= nn;   /* усреднение */
                /* перебор всей последовательности
                   с ограничением */
                for (j = ib; j < i; j++)
                    if (Ar[j] > av) Ar[j] = av;
                nn = 0; /* последовательность обработана */
            } /* конец если есть необработанная... */
    }  /* конец перебор массива */
    if (nn) /* если не обработана последняя
               отрицательная последовательность */
        for (av /= nn, j = ib; j < i; j++)
            if (Ar[j] > av) Ar[j] = av;
    /* вывод результатов */
    printf("Массив-результат:\n");
    for (i = 0; i < 100; printf("%3d  ", Ar[i++]));
    putchar('\n');

    return 0;
}