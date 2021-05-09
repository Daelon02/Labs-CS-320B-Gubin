#include"2course7Lab.h"
void strOut(int size) {
	Space ms;
	string str;
	ifstream file("file.txt");
	for (int i = 0; i < size - 1; ++i)
		getline(file, str);
	file >> ms.sc >> ms.apprWeight >> ms.percent >> ms.numberOfStars;
	file.close();
	cout << endl << ms.sc << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl << endl;
}