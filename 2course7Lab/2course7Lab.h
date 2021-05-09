#ifndef _LAB7_H_
#define _LAB7_H_

#include <fstream>
#include <iostream>
#include <windows.h>
#include <ctime>
#include <Windows.h>
#include <cstring>
#include <string>
#include <clocale>
#include <cstdlib>



using namespace std;

void keyboard_filling();
void random_filling();
void toBegin();
void toTheEnd();
void strOut(int);
void outAll();
void clean();

#define N 30
#define str_sz 15

extern char sc[str_sz];
extern float percent[str_sz];
extern float apprWeight[str_sz];
extern unsigned long long numberOfStars[str_sz];


struct Space {
	char sc[15];
	float percent, apprWeight;
	unsigned long long numberOfStars;
};

#endif