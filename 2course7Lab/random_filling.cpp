#define _CRT_SECURE_NO_WARNINGS
#include"2course7Lab.h"

char sc[str_sz] = { 'A','B','C','D','E','F','G','H','I','J' };
float apprWeight[str_sz] = { 32,1.25,0.2,0.03,3.45,1.93,5.82,9.83, 7.52, 4.62 };
float percent[str_sz] = { 0.00002,0.03,73.2,2.2,2.9,4.81,99.9,81.2, 0.002, 98.1 };
unsigned long long numberOfStars[str_sz] = { 55000,12000000000, 293000000000,55000000000, 120391278, 9213218321, 12832138, 21932173, 2198321, 371123 };


void random_filling() {
	srand(time(0));

	Space ms;

	int size = rand() % 7 + 1;
	cout << "Количество элементов: " << size << endl;
	int i_mean[str_sz];
	bool b_mean[str_sz];
	for (int i = 0; i < size; i++) {
		i_mean[i] = i;
		b_mean[i] = false;
	}
	for (int h = 0; h < size; h++) {
		int r = 0;
		r = rand() % 8;
		while (b_mean[r])
			r = rand() % 8;
		b_mean[r] = true;
		//char temp[str_sz];
		//for (int i = 0; i < str_sz; i++)
		//	temp[i] = '\0';
		//string ss;
		//ss.clear();
		//int str_size = strlen(ms.sc);
		//ss = sc;
		//for (int i = 0; i < str_size; i++)
		//	temp[i] = ss[i];
		//ss.clear();
		//strcpy(ms.sc, temp);
		ms.sc[0] = sc[r];
		ms.percent = percent[r];
		ms.apprWeight = apprWeight[r];
		ms.numberOfStars = numberOfStars[r];

		if (!h) {
			ofstream fout("file.txt");
		}
		ofstream fout("file.txt", ios_base::app);
		fout << ms.sc[0] << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl;
		fout.close();
	}


}