#include<iostream>
#include<ctime>
#include<Windows.h>
#define N 100
using namespace std;
extern int* A, * B, * C, * D, sizes[5];
int a[N], * A = a, b[N], * B = b, c[N], * C = c, d[N], * D = d, sizes[5];

#include<iostream>
#include<ctime>
using namespace std;
extern int* A, * B, * C, * D, sizes[5];
void filling(int* z, const int size) {
	srand(time(0));
	for (int i = 0; i < size; ++i)
		z[i] = rand() % 50 - 25;
}
void filling_arrs(int* w) {
	const int A_size = sizes[0];
	for (int i = 0; i < A_size; ++i) {
		if (w[i] < 0) {
			B[sizes[1]] = w[i];
			sizes[1]++;
		}
		else if (w[i] > 0) {
			C[sizes[2]] = w[i];
			sizes[2]++;
		}
		else {
			D[sizes[3]] = w[i];
			sizes[3]++;
		}
	}

}
void output(int* z, int x) {
	const int size = x;
	for (int i = 0; i < size; ++i)
		cout << z[i] << " ";
	cout << endl;
}
void refilling(int* y, int* z, int x) {
	const int size = x;
	for (int i = 0; i < size; ++i)
		y[i] = z[i];
}

int main() {
	srand(time(0));
	const int size = rand() % 10 + 1;
	cout << "Размер массива: " << size << endl;
	filling(A, size);
	sizes[0] = size;
	for (int i = 0; i < size; ++i)
		cout << A[i] << " ";
	cout << '\n';
	filling_arrs(A);
	cout << "Массив В" << endl << "> ";
	output(B, sizes[1]);
	cout << "Массив C" << endl << "> ";
	output(C, sizes[2]);
	cout << "Массив D" << endl << "> ";
	output(D, sizes[3]);
	cout << "Массив А с нулевыми элементами: " << '\n';
	refilling(A, D, sizes[3]);
	output(A, sizes[3]);
	cout << "Массив А с отрицательными элементами: " << '\n';
	refilling(A, B, sizes[1]);
	output(A, sizes[1]);
	cout << "Массив А с положительными элементами: " << '\n';
	refilling(A, C, sizes[2]);
	output(A, sizes[2]);
}