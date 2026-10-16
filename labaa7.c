#include <stdio.h>
#include <locale.h>

int main() {

    setlocale(LC_CTYPE, "RUS");
    int date, day, month;

    printf("Введите день и месяц слитно ");

    scanf("%d", &date);

    day = date / 100;
    month = date % 100;

    switch (month) {
    case 1: 
        if (day <= 19) printf("Козерог\n");
        else printf("Водолей\n");
        break;
    case 2:               
        if (day <= 18) printf("Водолей\n");
        else printf("Рыбы\n");
        break;
    case 3:       
        if (day <= 20) printf("Рыбы\n");
        else printf("Овен\n");
        break;
    case 4: 
        if (day <= 19) printf("Овен\n");
        else printf("Телец\n");
        break;
    case 5: 
        if (day <= 20) printf("Телец\n");
        else printf("Близнецы\n");
        break;
    case 6: 
        if (day <= 20) printf("Близнецы\n");
        else printf("Рак\n");
        break;
    case 7: 
        if (day <= 22) printf("Рак\n");
        else printf("Лев\n");
        break;
    case 8: 
        if (day <= 22) printf("Лев\n");
        else printf("Дева\n");
        break;
    case 9: 
        if (day <= 22) printf("Дева\n");
        else printf("Весы\n");
        break;
    case 10: 
        if (day <= 22) printf("Весы\n");
        else printf("Скорпион\n");
        break;
    case 11: 
        if (day <= 21) printf("Скорпион\n");
        else printf("Стрелец\n");
        break;
    case 12: 
        if (day <= 21) printf("Стрелец\n");
        else printf("Козерог\n");
        break;
    default:
        printf("Такого значения не существует\n");
        break;
    }

    return 0;
}
