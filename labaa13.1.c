#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#define max 100

int main() {
    setlocale(LC_ALL, "RUS");
    int x;
    int mass[max];

    printf("Введите количество элементов массива (1-%d): ", max);
    scanf("%d", &x);
    if (x <= 0 || x > max) {
        printf("Размер массива должен быть от 1 до %d\n", max);
        return 1;
    }

    printf("Введите %d целых чисел: \n", x);
    for (int i = 0; i < x; i++) {
        scanf("%d", &mass[i]);
    }

    double summ = 0.0;
    int chisl = 0;

    for (int i = 0; i < x; i++) {
        if (mass[i] != 0) {
            summ += mass[i];
            chisl++;
        }
    }

    if (chisl > 0) {
        double sr_zn = summ / chisl;
        printf("Сумма ненулевых элементов: %.2f\n", summ);
        printf("Количество ненулевых элементов: %d\n", chisl);
        printf("Среднее арифметическое: %.4f\n", sr_zn);
    }
    else {
        printf("Все элементы массива равны нулю\n");
    }

    return 0;
}