#include <stdio.h>
#include <time.h>
#include <stdlib.h>
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

    for (i = 0; i < N; i++) {
        if ((mass[i] < 0 && mass[i] >= 0) || (mass[i] >= 0 && mass[i + 1] < 0))
            par++;
    }
    printf("\n\n:\n");
    printf("%3d ", par);
    getchar();
    return 0;
}