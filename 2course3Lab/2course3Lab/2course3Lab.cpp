#include <iostream>
#include <conio.h>
#include <iomanip>
#include <time.h>
#include <clocale>
using namespace std;

int main() {
    srand(time(NULL));
    const size_t n = 10;

    int r, i, min, max, a[n];

    cout << " Массив: ";
    for (size_t i = 0; i < n; ++i)
    {
        a[i] = rand() % 100;
        cout << setw(4) << a[i];
    }
    max = min = a[0];

    for (i = 1; i < n; i++)
    {
        if (max < a[i]) max = a[i];
        if (min > a[i]) min = a[i];
    }
    cout << "\n\n  max=" << max << endl;
    cout << "\n  min=" << min << endl << endl;

    r = max - min;

    cout << "Массив без min и max: " << endl;
    for (i = 0; i < n; i++) {
        if (a[i] != min && a[i] != max) {
            cout << a[i] << " ";
        }
    }
}