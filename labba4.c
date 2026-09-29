#include <stdio.h>
#include <locale.h>
#include <windows.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    setlocale(LC_CTYPE, "RUS");

    int A, B;

    printf("Введите числа A и B: ");
    scanf("%d %d", &A, &B);

    if ((A % 2 == 0) != (B % 2 == 0)) {
        printf("Направление: Налево\n");
    }

    return 0;
}