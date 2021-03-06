﻿#include <iostream> 
#include <cstdlib>
#include <ctime>
using namespace std;

int* Input(int& n, int* mass) {
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        mass[i] = rand() % 100;
    }
    cout << "Созданный массив: " << endl;
    for (int i = 0; i < n; ++i) {
        cout << "[" << i << "]=" <<
            mass[i] << endl;
    }
    return mass;
}

int main() {
    srand(time(NULL));
    int n;
    cout << "Введите количество элементов массива: ";
    cin >> n;
    int* mass = new int[n];
    mass = Input(n, mass);
    float min = mass[0];
    float max = mass[0];
    for (int i = 0; i < n; i++) {   //находим минималтный и максимальный элемент в массиве
        if (mass[i] < min)
            min = mass[i];
        if (mass[i] > max)
            max = mass[i];
    };
    float rat = max / min;
    if (min == 0)
        cout << "Ошибка: деление на ноль!" << endl;
    else
        cout << "Отношение максимального элемента к минимальному: " << rat << endl;
    int* arr = new int[n - 2];
    int j = 0;
    cout << "Новый массив из элементов больше минимального и меньше максимального: " << endl;
    for (int i = 0; i < n; i++) {
        if (mass[i] > min && mass[i] < max) {
            arr[j] = mass[i];
            cout << "[" << j << "]=" <<
                arr[j] << endl;
            j++;
        }

    }
    system("PAUSE");
    return 0;
}