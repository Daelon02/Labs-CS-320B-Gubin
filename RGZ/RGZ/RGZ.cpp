#include<iostream>
#include<ctime>
#include<chrono>
#include<algorithm>
#define K 10
#define N 1
using namespace std;
double aver_dur, dur_arr[N + 10];
void shell_sort(int* a, int n) {
    int h, i, j, t;
    for (h = n; h /= 2;) {
        for (i = h; i < n; i++) {
            t = a[i];
            for (j = i; j >= h && t < a[j - h]; j -= h) {
                a[j] = a[j - h];
            }
            a[j] = t;
        }
    }
}

int main() {
    int A[K], A_copy[K];
    srand(time(0));
    for (int i = 0; i < K; ++i) {
        A[i] = rand() % 100;
        A_copy[i] = A[i];
    }
    cout << "Original array:" << endl;
    for (int i = 0; i < K; ++i)
        printf("%d ", A[i]);
    cout << endl << "Sorted array: " << endl;
    shell_sort(A, K);
    for (int i = 0; i < K; ++i)
        cout << A[i] << " ";
    /*
     for (int j = 0; j < N; ++j) {
         for (int l = 0; l < K; ++l)
             A[l] = A_copy[l];
         printf("\n Sorted array: %d", A[i]);
         shell_sort(A, K);
         for (int i = 0; i < K; ++i)
             cout << A[i] << " ";
     }*/
    for (int k = 0; k < N; ++k) {
        // Counting duration of sort

        // Seeking the time
        auto start = chrono::high_resolution_clock::now();
        shell_sort(A, K);

        // Seeking the time again 
        auto end = chrono::high_resolution_clock::now();

        // Counting period of time
        chrono::duration<double> duration = end - start;

        // Filling in duration array
        dur_arr[k] = duration.count();
        for (int i = 0; i < k; ++i)
            A[i] = A_copy[i];

        printf("\n Duration: %.7f\n", dur_arr[k]);
        sort(dur_arr, dur_arr + N);
        for (int i = 100; i < N - 100; ++i)
            aver_dur += dur_arr[i];
        cout << "Average duration = " << aver_dur / (N - 201) << "s";
    }
}