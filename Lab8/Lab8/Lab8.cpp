#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<conio.h>
#define N 200
int main(void)
{
    int i, mass[N];
    int par = 0;
    srand(time(NULL));
    printf(":\n");
    for (i = 0; i < N; i++)
    {
        mass[i] = rand() % 100 - 50;
        printf("%3d ", mass[i]);
    }

    for (i = 0; i < N - 2; i++) {
        if ((mass[i] < 0 && mass[i + 1] >= 0) || (mass[i] >= 0 && mass[i + 1] < 0))
            par++;
    }
    printf("\n\n:\n");
    printf("%3d ", par);
    getchar();
    return 0;
}