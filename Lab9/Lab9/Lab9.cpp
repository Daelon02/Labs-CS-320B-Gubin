#include <stdio.h>
int main()
{
    int A[9][9], b = 2, s = 1, i = 4, j = 4, y = 0;
    A[i][j] = 1;
    while (true)
    {
        for (y = 0; y < s; y++)
            A[i][--j] = b++;
        if (j == -1)
            break;
        for (y = 0; y < s; y++)
            A[++i][j] = b++;
        s++;
        for (y = 0; y < s; y++)
            A[i][++j] = b++;
        for (y = 0; y < s; y++)
            A[--i][j] = b++;
        s++;
    }
    for (i = 0; i < 9; i++)
    {
        for (j = 0; j < 9; j++)
            printf("%3d", A[i][j]);
        printf("\n");
    }
    return 0;
}