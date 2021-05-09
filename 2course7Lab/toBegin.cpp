#include "2course7Lab.h"
void toBegin() {

	Space ms;
	string str;
	int sz = 0;
	cout << "Введите: спектральный класс, Приблизительную массу , Часть , Численность > ";
	cin >> ms.sc >> ms.apprWeight >> ms.percent >> ms.numberOfStars;

	ofstream fout;
	fout.open("temp-file.txt");
	fout << ms.sc << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl;
	fout.close();

	ifstream file("file.txt");
	if (!file.is_open())
		cout << "Не возможно прочитать файл file.txt";
	while (!file.eof()) {
		getline(file, str);
		sz++;
	}
	file.close();
	sz--;
	int counter = 0;
	for (int i = 1; i <= sz; i++) {
		ifstream file("file.txt");

		for (int j = 0; j < i - 1; ++j)
			getline(file, str);
		file >> ms.sc >> ms.apprWeight >> ms.percent >> ms.numberOfStars;
		file.close();
		ofstream fout("temp-file.txt", ios_base::app);
		fout << ms.sc << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl;
		fout.close();
	}
	sz++;

	for (int i = 1; i <= sz; ++i) {
		ifstream file("temp-file.txt");
		for (int j = 0; j < i - 1; ++j)
			getline(file, str);
		file >> ms.sc >> ms.apprWeight >> ms.percent >> ms.numberOfStars;
		file.close();
		if (i == 1)
			ofstream fout("file.txt");
		ofstream fout("file.txt", ios_base::app);
		fout << ms.sc << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl;
	}
	remove("temp-file.txt");
}