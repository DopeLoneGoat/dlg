#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <locale.h>

int main() {
    setlocale(LC_CTYPE, "RUS");
    int  секунды;
    int часов, минут, секунд;

    printf("Введите количество секунд ");
    scanf("%d", &секунды);

    
    if (секунды < 0) {
        printf("Ошибка: количество секунд не может быть отрицательным!\n");
        return 1;
    }

    часов = секунды / 3600;
    int остаток = секунд % 3600;
    минут = остаток / 60;
    секунд = остаток % 60;
    printf("%d секунд = %d часов %d минут %d секунд\n",
        секунды, часов, минут, секунд);

    return 0;
}
