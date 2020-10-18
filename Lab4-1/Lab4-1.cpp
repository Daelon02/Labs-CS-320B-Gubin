#include <stdio.h>
#include<windows.h>

int main() {
    system("chcp 1251");
    system("cls");
    printf("Имеем части структуры:  1 1 1 0 0 0 1 D B B B B A A A A \n");
    int result = 0;
    result |= 0xA << 0;
    printf("Cместим значения поэтапно: 0xA<<\t%d\n", result);
    result |= 0xA << 1;
    printf("Cместим значения поэтапно: 0xA<<\t%d\n", result);
    result |= 0xA << 2;
    printf("Cместим значения поэтапно: 0xA<<\t%d\n", result);
    result |= 0xA << 3;
    printf("Cместим значения поэтапно: 0xA<<\t%d\n", result);
    result |= 0xB << 4;
    printf("Cместим значения поэтапно: 0xB<<\t%d\n", result);
    result |= 0xB << 5;
    printf("Cместим значения поэтапно: 0xB<<\t%d\n", result);
    result |= 0xB << 6;
    printf("Cместим значения поэтапно: 0xB<<\t%d\n", result);
    result |= 0xB << 7;
    printf("Cместим значения поэтапно: 0xB<<\t%d\n", result);
    result |= 0xD << 8;
    printf("Cместим значения поэтапно: 0xD<<\t%d\n", result);
    result |= 0x1 << 9;
    printf("Cместим значения поэтапно: 0x1<<\t%d\n", result);
    result |= 0x0 << 10;
    printf("Cместим значения поэтапно: 0x0<<\t%d\n", result);
    result |= 0x0 << 11;
    printf("Cместим значения поэтапно: 0x0<<\t%d\n", result);
    result |= 0x0 << 12;
    printf("Cместим значения поэтапно: 0x0<<\t%d\n", result);
    result |= 0x1 << 13;
    printf("Cместим значения поэтапно: 0x1<<\t%d\n", result);
    result |= 0x1 << 14;
    printf("Cместим значения поэтапно: 0x1<<\t%d\n", result);
    result |= 0x1 << 15;
    printf("Cместим значения поэтапно: 0x1<<\t%d\n\n", result);

    printf("Получено число: %d", result);

    return 0;
}