#include <stdio.h>
#include <stdlib.h>
#include <ctime>
#include <conio.h>

int main(void) {

	system("chcp 1251");
	system("cls");
	srand(time(NULL));

	const int N = 15;
	int mas[N], mas2[N];//massive
	int mas3[100];

	int max, min; max = 0; //rand 
	int q, w;
	int x, y, z; z = 0;
	int x1, x2, x3;
	int q1, q2; q1 = 1; q2 = 0;
	int n, N1;
	int k; k = 0;

	printf("Что вы хотите сделать с массивом?");
	printf("\n1-добавить елементы\n2-удалить елементы\n");
	printf("==>");
	scanf_s("%d", &w);

	for (n = 0; n < N; n++) { z = rand() % 10; mas[n] = z; mas2[n] = z; mas3[n] = z; }

	switch (w) {

	case 1: { for (n = 0; ;) {
		printf("\nМассив:");
		for (n = 0; n < N; n++) { printf("%3d", mas[n]); }

		printf("\nС какого елемента:");
		scanf_s("%d", &x);
		printf("Сколько елементов добавить:");
		scanf_s("%d", &x1);
		x3 = x + x1;
		N1 = N + x1;
		if (x1 < 0 || x < 0) { printf("Вы ввели отрицательное число\n"); system("pause"); system("cls"); continue; }
		if (x == N) {
			k = x;
		}
		else if (x > N) {
			printf("\nДействие невозможно");
			printf("\nВ массиве максимум %d елементов, вы запрашиваете добавление елементов с %d по %d\n", N, x, x3);
			system("pause"); system("cls");
			continue;
		}
		else { k = x + 1; }
		for (n = x; n < N; n++) { mas3[n + x] = mas[n]; }

		printf("\nВыберите вариант заполнения елементов\n");
		printf("1-рандомайзером\n2-в ручную\n");
		printf("==>"); scanf_s("%d", &q);

		switch (q)
		{

		case 1: { printf("\nВыберите min и max рандомайзера\n");

			printf("min=>");
			scanf_s("%d", &min);
			printf("max=>");
			scanf_s("%d", &max);

			for (n = k; n < x3 + 1; n++) { z = rand() % (max - min + 1) + min; mas3[n] = z; }break; }
		case 2: {for (n = k; n < x3 + 1; n++, q1++) { printf("%d)", q1); scanf_s("%d", &z); mas3[n] = z; }break; }
		}

		break;
	}


		  printf("\nМассив до:");
		  for (n = 0; n < N; n++) { printf("%3d", mas[n]); }

		  printf("\nМассив после:");
		  for (n = 0; n < N1; n++) { printf("%3d", mas3[n]); }

		  break;
	}




	case 2: {for (n = 0; ;) {
		printf("\nМассив:");
		for (n = 0; n < N; n++) { printf("%3d", mas[n]); }

		printf("\nC какого елемента:");
		scanf_s("%d", &x2);//с какого елемента
		printf("Сколько елементов удалить:");
		scanf_s("%d", &x1);//сколько елементов
		x3 = x2 + x1;
		if (x2 < 0 || x1 < 0) { printf("Вы ввели отрицательное число\n"); system("pause"); system("cls"); continue; }
		else if (x3 <= N) {
			for (n = x2; n < N - x1; n++) { mas2[n] = mas2[n + x1]; }

			printf("\nМассив до:");
			for (n = 0; n < N; n++) { printf("%3d", mas[n]); }

			printf("\nМассив после:");
			for (n = 0; n < N - x1; n++) { printf("%3d", mas2[n]); }
			break;
		}
		else if (x3 > N) {
			printf("\nДействие невозможно,потому что");
			printf("\nВ массиве максимум %d елементов, вы запрашиваете удаление елементов с %d по %d\n", N, x2, x3);
			system("pause"); system("cls");
			continue;
		}
	}

	}
	}

	return 0;
}