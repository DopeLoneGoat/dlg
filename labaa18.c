#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <string.h>

#define MAX_EMPLOYEES 10
#define STR_LEN 50

struct Date {
    int day;
    int month;
    int year;
};

struct Employee {
    char famil[STR_LEN];
    char name[STR_LEN];
    char otchestvo[STR_LEN];
    char dolzhnost[STR_LEN];
    double zarplata;
    struct Date birthDate;
};

int Younger(struct Date d1, struct Date d2) {
    if (d1.year != d2.year)
        return d1.year > d2.year;
    if (d1.month != d2.month)
        return d1.month > d2.month;
    return d1.day > d2.day;
}

int main() {
    setlocale(LC_ALL, "RUS");
    struct Employee employees[MAX_EMPLOYEES];
    int n;

    printf("Введите количество сотрудников (5-10): ");
    scanf("%d", &n);

    if (n < 1 || n > MAX_EMPLOYEES) {
        printf("Неверное количество\n");
        return 1;
    }

    for (int i = 0; i < n; i++) {
        printf("\nСотрудник %d\n", i + 1);
        printf("Фамилия: ");
        scanf("%s", employees[i].famil);
        printf("Имя: ");
        scanf("%s", employees[i].name);
        printf("Отчество: ");
        scanf("%s", employees[i].otchestvo);
        printf("Должность: ");
        scanf("%s", employees[i].dolzhnost);
        printf("Зарплата: ");
        scanf("%lf", &employees[i].zarplata);
        printf("Дата рождения (день месяц год): ");
        scanf("%d %d %d", &employees[i].birthDate.day,
            &employees[i].birthDate.month,
            &employees[i].birthDate.year);
    }

    int youngestIndex = 0;
    for (int i = 1; i < n; i++) {
        if (Younger(employees[i].birthDate, employees[youngestIndex].birthDate)) {
            youngestIndex = i;
        }
    }

    printf("Самый молодой сотрудник:\n");
    printf("Фамилия:    %s\n", employees[youngestIndex].famil);
    printf("Имя:        %s\n", employees[youngestIndex].name);
    printf("Отчество:   %s\n", employees[youngestIndex].otchestvo);
    printf("Должность:  %s\n", employees[youngestIndex].dolzhnost);
    printf("Зарплата:   %.2f\n", employees[youngestIndex].zarplata);
    printf("Дата рождения: %d.%d.%d\n",
        employees[youngestIndex].birthDate.day,
        employees[youngestIndex].birthDate.month,
        employees[youngestIndex].birthDate.year);

    return 0;
}