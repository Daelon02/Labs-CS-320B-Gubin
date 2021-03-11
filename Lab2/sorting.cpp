#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <ctime>
#include <ratio>
#include <chrono>
#include <stdio.h>
#include "struct_file.h"

using namespace std;

extern struct Space x;

void sorting(Space* ms, int size) {

	bool activated = false;

	int mn = 0, j = 0, i = 0;


	#ifdef DEBUG
		using chrono::system_clock;
		chrono::duration<int, ratio<60 * 60 * 24> > one_day(1);
		system_clock::time_point today = system_clock::now();
		time_t tt;
		tt = system_clock::to_time_t(today);
		if (!activated) {
			cout << "Today is: " << ctime(tt) << __FUNCTION__ << endl;
			activated = true;
		}
	#endif

	

	for (int i = 0; i < size; ++i) {
		mn = i;
		for (j = i + 1; j < size; ++j)
			if (ms[mn].sc[0] > ms[j].sc[0])mn = j;
		if (mn > i) {
			strcpy(x.sc, ms[i].sc);
			x.percent = ms[i].percent;
			x.apprWeight = ms[i].apprWeight;
			x.numberOfStars = ms[i].numberOfStars;
			strcpy(ms[i].sc, ms[mn].sc);
			ms[i].percent = ms[mn].percent;
			ms[i].apprWeight = ms[mn].apprWeight;
			ms[i].numberOfStars = ms[mn].numberOfStars;
			strcpy(ms[mn].sc, x.sc);
			ms[mn].percent = x.percent;
			ms[mn].apprWeight = x.apprWeight;
			ms[mn].numberOfStars = x.numberOfStars;
		}
	}
	cout << endl << "Структура отсортирована " << size << endl << endl;

	#ifdef DEBUG
		if (activated)
			cout << endl << "DEBUG is defined" << endl << endl;
	#endif
}