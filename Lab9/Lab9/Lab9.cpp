//#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <windows.h>
#define S 9

int main()
{
    int const n = 4;
    int i, j, border = 1, num = 1;
    int A[S][S];

    i = j = n;
    A[j][i] = num;
    while (border <= n)
    {
        while (i != n + border && ((i != n + border) || (j != n - border)))
        {
            i++; num++; A[j][i] = num;
        }
        while (j != n - border && ((i != n + border) || (j != n - border)))
        {
            j--; num++; A[j][i] = num;
        }
        while (i != n - border && ((i != n + border) || (j != n + border)))
        {
            i--; num++; A[j][i] = num;
        }
        while (j != n + border && ((i != n - border) || (j != n + border)))
        {
            j++; num++; A[j][i] = num;
        }
        if (j == n + border && i == n - border)
            border++;
    }
    for (i = 0; i < 2 * n + 1; i++)
    {
        for (j = 0; j < 2 * n + 1; j++)
            printf("%3d", A[j][i]);
        printf("\n");
    }
    return 0;
}