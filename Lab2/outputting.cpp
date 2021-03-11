#define _CRT_SECURE_NO_WARNINGS
#include<iostream>
#include<ratio>
#include<chrono>
#include<ctime>
#include<stdio.h>
#include "struct_file.h"
#define DEBUG 1

using namespace std;
void outputting(Space* ms, int size) {

	bool active = false;

#ifdef DEBUG
	using chrono::system_clock;
	chrono::duration<int, ratio<60 * 60 * 24> > one_day(1);
	system_clock::time_point today = system_clock::now();
	time_t tt;
	tt = system_clock::to_time_t(today);
	if (!active) {
		cout << "Today is: " << ctime(&tt) << __FUNCTION__ << endl;
		active = true;
	}
#endif

	printf("--------------------------------------------------------------------------\n");
	printf("|Приблизительное количество звезд разных спектральных классов в Галактике|\n");
	printf("|------------------------------------------------------------------------|\n");
	printf("| Спектральный класс | Приблизительная масса | Часть  |    Численность   |\n");

	for (int i = 0; i < size; ++i) {
		printf("|--------------------|-----------------------|--------|------------------|\n");
		printf("| %18c | %21f | %6.5Lf| %16lli |\n", ms[i].sc[0], ms[i].apprWeight, ms[i].percent, ms[i].numberOfStars);
	}
	printf("|------------------------------------------------------------------------|\n");
	printf("|        Примечание: не показаны данные для классов: B, A, G, K          |\n");
	printf("--------------------------------------------------------------------------\n\n\n\n");

#ifdef DEBUG

	if (active)
		cout << "DEBUG is defined" << endl << endl;

#endif
}