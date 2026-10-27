#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");

    char sym;
    int a;
    int cikl;

    do {
        printf("\nВведите символ для рисования контура: ");
        scanf(" %c", &sym);

        printf("Введите длину стороны a: ");
        scanf("%d", &a);

        if (a % 2 == 0) {
            a++;
        }

        int h = a / 2;

        printf("\n");

        for (int i = 0; i <= h; i++) {

            for (int j = 0; j < i; j++) {
                printf(" ");
            }

            int aa = a - 2 * i;

            if (i == 0) {

                for (int j = 0; j < aa; j++) {
                    printf("%c", sym);
                }
            }
            else if (aa == 1) {

                printf("%c", sym);
            }
            else {
                printf("%c", sym);
                for (int j = 0; j < aa - 2; j++) {
                    printf(" ");
                }
                printf("%c", sym);
            }
            printf("\n");
        }
        printf("\nПродолжить? Да - введите любое число, Нет - введите 0: ");
        scanf("%d", &cikl);

    } while (cikl != 0);

    printf("Программа завершена\n");
    return 0;
}