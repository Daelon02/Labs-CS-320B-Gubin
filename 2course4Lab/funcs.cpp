#include "funcs.h"

int* Input(int& n, int* mass) {
    srand(time(NULL));
    for (int i = 0; i < n; ++i) {
        mass[i] = rand() % 100;
    }
    return mass;
}
void Exercise(int& n, int* mass, float& min, float& max) {
    float rat = 0;
    for (int i = 0; i < n; i++) {
        if (mass[i] < min)
            min = mass[i];
        if (mass[i] > max)
            max = mass[i];
    };
    rat = max / min;
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

}