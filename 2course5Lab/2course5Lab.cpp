#include <iostream> 
#include <iomanip>

#define D_ARRAY      //использование функции с двумерным массивом
//#define O_ARRAY      //использование функции с одномерным массивом

using namespace std;
int* fill2(int* Arr, int S) {

    int i, j, k, edge, num = S * S;
    if (S % 2 == 0) {
        for (k = 0; k < S / 2; k++) {
            edge = S - 1 - k;
            for (j = edge; j > k; j--, num--)
                Arr[(edge * S) + j] = num;
            for (i = edge; i > k; i--, num--)
                Arr[(i * S) + k] = num;
            for (j = k; j < edge; j++, num--)
                Arr[(k * S) + j] = num;
            for (i = k; i < edge; i++, num--)
                Arr[(i * S) + edge] = num;
        }
    }
    else {
        for (k = 0; k < S / 2; k++) {
            edge = S - 1 - k;
            for (j = k; j < edge; j++, num--)
                Arr[(k * S) + j] = num;
            for (i = k; i < edge; i++, num--)
                Arr[(i * S) + edge] = num;
            for (j = edge; j > k; j--, num--)
                Arr[(edge * S) + j] = num;
            for (i = edge; i > k; i--, num--)
                Arr[(i * S) + k] = num;
        }
        Arr[((S / 2) * S) + (S / 2)] = num;
    }
    return Arr;
}
int** fill(int** Ar, int S) {
    int i, j, k, edge, num = S * S;
    if (S % 2 == 0) {
        for (k = 0; k < S / 2; k++) {
            edge = S - 1 - k;
            for (j = edge; j > k; j--, num--)
                Ar[edge][j] = num;
            for (i = edge; i > k; i--, num--)
                Ar[i][k] = num;
            for (j = k; j < edge; j++, num--)
                Ar[k][j] = num;
            for (i = k; i < edge; i++, num--)
                Ar[i][edge] = num;
        }
    }
    else {
        for (k = 0; k < S / 2; k++) {
            edge = S - 1 - k;
            for (j = k; j < edge; j++, num--)
                Ar[k][j] = num;
            for (i = k; i < edge; i++, num--)
                Ar[i][edge] = num;
            for (j = edge; j > k; j--, num--)
                Ar[edge][j] = num;
            for (i = edge; i > k; i--, num--)
                Ar[i][k] = num;
        }
        Ar[S / 2][S / 2] = num;
    }
    return Ar;
}
int main() {
a:
    int S = 0;
    cout << "Введите размер матрицы: ";
    cin >> S;
    if (S <= 0) {
        cout << "Размер должен быть больше 0!" << endl;
        goto a;
    }
    int** Ar = new int* [S];
    for (int i = 0; i < S; i++)
        Ar[i] = new int[S];

#ifdef D_ARRAY
    cout << "Использование функции с двумерным массивом." << endl;
    Ar = fill(Ar, S);
#else
#ifdef O_ARRAY
    cout << "Использование функции с одномерным массивом." << endl;
    int* Arr = new int[S * S];
    Arr = fill2(Arr, S);
    int t = 0;
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            Ar[i][j] = Arr[t++];
        }
    }
#endif
#endif
    for (int i = 0; i < S; i++) {
        for (int j = 0; j < S; j++) {
            cout << setw(5) << Ar[i][j];
        }
        cout << endl;
    }
    system("PAUSE");
    return 0;
};
