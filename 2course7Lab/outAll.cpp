#include"2course7Lab.h"
void outAll() {
	Space ms;
	int sz = 0;
	string str;
	ifstream f("file.txt");
	while (getline(f, str))
		sz++;
	f.close();
	ifstream file("file.txt");
	for (int i = 0; i < sz; ++i) {
		file >> ms.sc >> ms.apprWeight >> ms.percent >> ms.numberOfStars;
		cout << ms.sc << " " << ms.apprWeight << " " << ms.percent << " " << ms.numberOfStars << endl;
	}
	file.close();
}