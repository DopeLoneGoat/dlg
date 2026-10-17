#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int n;
    double x, sum = 0.0;

    printf("Введите натуральное n: ");
    scanf("%d", &n);
    printf("Введите действительное x: ");
    scanf("%lf", &x);

    for (int i = 1; i <= n; i++) {
        x = sin(x);
        sum += x;
    }

    printf("Сумма = %lf\n", sum);

    return 0;
}