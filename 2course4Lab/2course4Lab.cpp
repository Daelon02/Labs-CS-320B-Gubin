#include <iostream> 
#include <cstdlib>
#include <ctime>
#include "funcs.h"
using namespace std;
int main() {
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int* mass = new int[n];
    mass = Input(n, mass);
    cout << "Созданный массив: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "[" << i << "]=" <<
            mass[i] << endl;
    }
    float min = mass[0];
    float max = mass[0];
    Exercise(n, mass, min, max);
    system("PAUSE");
    return 0;
};