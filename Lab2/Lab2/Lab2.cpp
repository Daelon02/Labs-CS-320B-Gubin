#include <stdio.h>
#include<Windows.h>

int main(void) {
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);
	char name1[9], name2[9], name3[9];
	char sc1, sc2, sc3;
	unsigned short cnt1, cnt2, cnt3;
	double sq1, sq2, sq3;
	printf("1. Введите: вещество, тип, влажность, коэффициент: ");
	scanf_s("%s %c %d %f", &name1, &sc1, &cnt1, &sq1);
	printf("2. Введите: вещество, тип, влажность, коэффициент: ");
	scanf_s("%s %c %d %f", &name2, &sc2, &cnt2, &sq2);
	printf("3. Введите: вещество, тип, влажность, коэффициент: ");
	scanf_s("%s %c %d %f", &name3, &sc3, &cnt3, &sq3);
	printf("|---------------------------------------------|\n");
	printf("|  Коэффициенты теплопроводимости материаллов | |\n");
	printf("|---------------------------------------------|\n");
	printf("| Вещество | тип | влажность |  коэффициент   |\n");
	printf("|----------|-------|-----------|--------------|\n");
	printf("| %9s | %c | %3d | %-5.1f |\n", name1, sc1, cnt1, sq1);
	printf("| %9s | %c | %3d | %-5.1f |\n", name2, sc2, cnt2, sq2);
	printf("| %9s | %c | %3d | %-5.1f |\n", name3, sc3, cnt3, sq3);
	printf("|---------------------------------------------|\n");
}