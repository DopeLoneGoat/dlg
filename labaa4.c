#include <stdio.h>
#include <math.h>
#include <locale.h>
#define _CRT_SECURE_NO_WARNINGS

int main() {
    setlocale(LC_CTYPE, "RUS");
    double x, y, z, w;

    printf("Введите значения x, y, z: ");
    scanf("%lf %lf %lf", &x, &y, &z);

    w = pow(fabs(x), y / x) - cbrt(y / x) + (y - x) * (cos(y) - z / (y - x)) / (1.0 + pow(y - x, 2.0));

    printf("Результат w = %lf\n", w);

    return 0;
}