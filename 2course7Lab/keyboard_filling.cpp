#include"2course7Lab.h"
void keyboard_filling() {
	Space ms;
	for (int i = 0; i < N; ++i) {
		cout << i + 1 << "Введите: спектральный класс, Приблизительную массу , Часть , Численность > ";
		cin >> ms.sc;
		if (!strcmp(ms.sc, "***"))
			break;
		cin >> ms.apprWeight >> ms.percent >> ms.numberOfStars;

		// For cleaning file when command'll be called more than one time
		if (!i)
			ofstream fout("file.txt");
		ofstream fout("file.txt", ios_base::app);
		fout << ms.sc << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl;
		fout.close();
	}
}