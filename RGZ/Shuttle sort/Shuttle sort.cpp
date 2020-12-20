#include<iostream>
#include<ctime>
#include<chrono>
#include<algorithm>
#define K 10
#define N 1
using namespace std;

//ф-ция для обмена значений ячеек
void swapEl(int* arr, int i)
{
    int buff;
    buff = arr[i];
    arr[i] = arr[i - 1];
    arr[i - 1] = buff;
}

//ф-ция челночной-сортировки
void ShutterSort(int* arr, int size)
{
    int leftMark = 1;
    int rightMark = size - 1;
    while (leftMark <= rightMark)
    {
        for (int i = rightMark; i >= leftMark; i--)
            if (arr[i - 1] > arr[i]) swapEl(arr, i);
        leftMark++;


        for (int i = leftMark; i <= rightMark; i++)
            if (arr[i - 1] > arr[i]) swapEl(arr, i);
        rightMark--;

    }
}

int main()
{
    setlocale(LC_ALL, "rus");
    double aver_dur = 0, dur_arr[N + 10];
    int size = rand() % 50;
    int* A = new int[size];

    for (int k = 0; k < size; k++)
    {
        A[k] = size - k; // запись значений по убыванию
        cout << A[k] << " ";
    }

    ShutterSort(A, size); // сортировка

    cout << "\nМассив после сортировки:\n";
    for (int k = 0; k < size; k++)
    {
        cout << A[k] << " ";
    }
    cout << endl;
    for (int k = 0; k < N; ++k) {
        // Counting duration of sort
        // Seeking the time
        auto start = chrono::high_resolution_clock::now();
        ShutterSort(A, K);

        // Seeking the time again 
        auto end = chrono::high_resolution_clock::now();

        // Counting period of time
        chrono::duration<double> duration = end - start;

        // Filling in duration array
        dur_arr[k] = duration.count();

        printf("\n Duration: %.7f\n", dur_arr[k]);
    }
}

