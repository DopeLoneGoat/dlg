#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int n;
    double x, sum = 0.0, current_val;

    printf("Введите натуральное n: ");
    scanf("%d", &n);
    printf("Введите действительное x: ");
    scanf("%lf", &x);

    // Инициализируем начальное значение (перед первым синусом)
    current_val = x;

    // Цикл выполняется n раз
    for (int i = 1; i <= n; i++) {
        current_val = sin(current_val); // Применяем синус
        sum += current_val;             // Добавляем к общей сумме
    }

    printf("Сумма = %lf\n", sum);

    return 0;
}