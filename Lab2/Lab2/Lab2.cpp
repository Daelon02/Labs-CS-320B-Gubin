﻿#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<windows.h>

using namespace std;

char s1[20], s2[20], s3[20];
char t1, t2, t3;
int q1, q2, q3;
int weight1, weight2, weight3;

int main() {

	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	//Фланец З 3 450
	//Переходник П 8 74
	//Станина О 1 117050

	printf("1. Введите: наименование, тип, количество, вес 1 детали(г): ");
	scanf("%s%s%d%d", s1, &t1, &q1, &weight1);

	printf("2. Введите: наименование, тип, количество, вес 1 детали(г):  ");
	scanf("%s%s%d%d", s2, &t2, &q2, &weight2);

	printf("3. Введите: наименование, тип, количество, вес 1 детали(г):  ");
	scanf("%s%s%d%d", s3, &t3, &q3, &weight3);

	printf("-------------------------------------------------------------------------------\n");
	printf("|				Ведомость деталей                             |\n");
	printf("-------------------------------------------------------------------------------\n");
	printf("| Наименование	    |	 Тип	 |	Количество  |   Вес 1 детали(г)	      |\n");
	printf("|-------------------|------------|------------------|-------------------------|\n");
	printf("|%-19s|%-12c|%-18d|%-25u|\n", s1, t1, q1, weight1);
	printf("|-------------------|------------|------------------|-------------------------|\n");
	printf("|%-19s|%-12c|%-18d|%-25u|\n", s2, t2, q2, weight2);
	printf("|-------------------|------------|------------------|-------------------------|\n");
	printf("|%-19s|%-12c|%-18d|%-25u|\n", s3, t3, q3, weight3);
	printf("|-----------------------------------------------------------------------------|\n");
	printf("| Примечание: принято такое кодирование типов:                                |\n| О - оригинальная, П - покупная, З - заимствованная                          |\n");
	printf("-------------------------------------------------------------------------------\n");
	return 0;
}