#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>
#include <math.h>

float plosha(float a) {
    return (a * a) / 4.0;
}

void opred() {
    printf("\nОПРЕДЕЛЕНИЕ: Прямоугольный (перевернутый) треугольник — это геометрическая фигура, образованная тремя отрезками, которые соединяют три точки, не лежащие на одной прямой. Углы при основании равны 45 градусам.\n");
}

void risun(int a, char sym) {
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
}

int main() {
    setlocale(LC_CTYPE, "RUS");
    int a;
    char sym;
    int cikl;

    printf("Введите длину стороны a (основание): ");
    scanf("%d", &a);
    printf("Введите символ для рисования: ");
    scanf(" %c", &sym);

    do {
        printf("\n--- МЕНЮ ---\n");
        printf("1) Рассчитать площадь\n");
        printf("2) Вывести определение фигуры\n");
        printf("3) Нарисовать фигуру\n");
        printf("0) Выход\n");
        printf("Выберите действие: ");
        scanf("%d", &cikl);

        switch (cikl) {
        case 1:
            printf("Площадь фигуры: %.2f\n", plosha(a));
            break;
        case 2:
            opred();
            break;
        case 3:
            risun(a, sym);
            break;
        case 0:
            printf("Программа завершена.\n");
            break;
        default:
            printf("Неверный выбор. Попробуйте снова.\n");
        }
    } while (cikl != 0);

    return 0;
}