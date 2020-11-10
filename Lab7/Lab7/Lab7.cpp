#include <stdio.h>
#include <math.h>
#include<windows.h>
int main(void) {
    system("chcp 1251");
    system("cls");
    short n;
    double x, y;
    short h;
    printf("|   x  |   y   |\n");
    printf("----------------\n");
    for (n = 0; n < 5; n++) {
        for (x = 0; x < 4; x += 0.25) {
            if (x < 1) y = x;
            else if (x < 3) y = 2 - x;
            else y = x - 4;
            if (x <= 2)printf("| %.2lf | %.2lf  |", x + n * 4, y);
            else printf("| %.2lf | %.2lf |", x + n * 4, y);
            h = (y + 1) * 10;
            for (; h > 0; h--) printf(" ");
            printf("*\n");
        }
    }
    return 0;
}