#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <stdio.h>
#include <stdlib.h>
#include "struct_file.h"
/*
PRINT_TYPE == 1 --> keyboard filling
PRINT_TYPE == 2 --> random filling
*/

#define PRINT_TYPE 2

#define N 30
#define str_sz 15

//struct Space {
//	char sc[15];
//	float percent, apprWeight;
//	unsigned long long numberOfStars;
//};
//struct Space* ms[N], x;

using namespace std;

extern int sz;

char scс[str_sz] = { 'A','B','C','D','E','F','G','H','I','J' };
float apprWeight[str_sz] = { 32,1.25,0.2,0.03,3.45,1.93,5.82,9.83, 7.52, 4.62 };
float percent[str_sz] = { 0.00002,0.03,73.2,2.2,2.9,4.81,99.9,81.2, 0.002, 98.1 };
unsigned long long numberOfStars[str_sz] = { 55000,12000000000, 293000000000,55000000000, 120391278, 9213218321, 12832138, 21932173, 2198321, 371123 };

void struct_filling(Space* ms) {
	bool activated = false;

	#ifdef DEBUG
		using chrono::system_clock;
		chrono::duration<int, std::ratio<60 * 60 * 24> > one_day(1);
		system_clock::time_point today = system_clock::now();
		time_t tt;
		tt = system_clock::to_time_t(today);
		if (!activated) {
			cout << "today is: " << ctime(&tt) << endl << __FUNCTION__ << endl;
			activated = true;
		}
		cout << __FILE__ << endl << endl;
	#endif

	#if PRINT_TYPE==1
		int size = 0;
		for (int i = 0; i < 10; ++i) {
			cout << i + 1 << ".  Введите: спектральный класс, Приблизительную массу , Часть , Численность > ";

			cin >> ms[i].sc;
			if (!strcmp(ms[i].sc, "***")) break;
			cin >> ms[i].apprWeight >> ms[i].percent >> ms[i].numberOfStars;
			size++;
		}
		sz = size;
	#elif PRINT_TYPE==2
		srand(time(0));
		srand(time(0));
		int size = rand() % 7 + 1;
		cout << "Количество элементов: " << size << endl;
		int i_mean[str_sz];
		bool b_mean[str_sz];
		for (int i = 0; i < size; ++i) {
			i_mean[i] = i;
			b_mean[i] = false;
		}
		for (int h = 0; h < size; ++h) {
			int r;
			r = rand() % 8;
			while (b_mean[r])
				r = rand() % 8;
			b_mean[r] = true;
			char temp[str_sz];
			for (int i = 0; i < str_sz; ++i)
				temp[i] = '\0';
			string ss;
			ss.clear();
			int str_size = strlen(ms[h].sc);
			ss = ms[r].sc;
			for (int i = 0; i < str_size; ++i)
				temp[i] = ss[i];
			ss.clear();
			strcpy(ms[h].sc, temp);
			ms[h].sc[0] = scс[r];
			ms[h].percent = percent[r];
			ms[h].apprWeight = apprWeight[r];
			ms[h].numberOfStars = numberOfStars[r];
		}
		cout << "Структура заполнена" << endl;
		sz = size;
	#endif
	#ifdef DEBUG
		if (activated)
			cout << endl << "DEBUG is defined" << endl << endl;
	#endif
}