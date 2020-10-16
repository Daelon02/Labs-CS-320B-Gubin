#include <stdio.h>
#include <stdlib.h>
#include<Windows.h>

int main(void) {
    SetConsoleOutputCP(1251);
    SetConsoleCP(1251);


    char sc1, sc2, sc3;
    double quan1, quan2, quan3;
    long double cnt1, cnt2, cnt3;
    long long int width1, width2, width3;


    printf("1. Введите: наименование, тип, количество, вес 1 детали(г): ");
    scanf_s("%c %lf %Lf %lli", &sc1, &quan1, &cnt1, &width1);

    printf("2. Введите: наименование, тип, количество, вес 1 детали(г): ");
    scanf_s("%c %lf %Lf %lli", &sc2, &quan2, &cnt2, &width2);

    printf("3. Введите: наименование, тип, количество, вес 1 детали(г): ");
    scanf_s("%c %lf %Lf %lli", &sc3, &quan3, &cnt3, &width3);

    printf("|---------------------------------------------|\n");
    printf("|  Ведомость деталей | |\n");
    printf("|---------------------------------------------|\n");
    printf("| Наименование | Тип | Количество |  Вес 1 детали (г)   |\n");
    printf("|----------|-------|-----------|--------------|\n");
    printf("| %c | %lf | %Lf | %lli |\n", sc1, quan1, cnt1, width1);
    printf("| %c | %lf | %Lf | %lli |\n", sc2, quan2, cnt2, width2);
    printf("| %c | %lf | %Lf | %lli |\n", sc3, quan3, cnt3, width3);
    printf("|---------------------------------------------|\n");
    return 0;
}