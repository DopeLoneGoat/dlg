#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <time.h>
#include <locale.h>

int main() {
    setlocale(LC_ALL, "RUS");

    double balance = 0.0;
    int deystvie;
    double summ = 0.0;
    char time_buf[32];

    printf("=== ПРОТОКОЛ БАНКОМАТА ===\n");
    printf("Введите начальный баланс: ");
    scanf("%lf", &balance);
    do {
        printf("\nМеню:\n");
        printf("1. Пополнение\n");
        printf("2. Снятие\n");
        printf("0. Выход\n");
        printf("Выберите операцию: ");
        scanf("%d", &deystvie);
        if (deystvie == 0) {
            break;
        }

        time_t now = time(NULL);
        strftime(time_buf, sizeof(time_buf), "%Y-%m-%d %H:%M:%S", localtime(&now));

        FILE* f = fopen("atm.log", "a");
        if (f == NULL) {
            perror("Ошибка открытия файла atm.log");
            return 1;
        }

        switch (deystvie) {
        case 1:
            printf("Введите сумму пополнения: ");
            scanf("%lf", &summ);

            if (summ > 0) {
                balance += summ;
                fprintf(f, "%s | %-12s | %10.2f | Баланс: %10.2f\n",
                    time_buf, "Пополнение", summ, balance);
                printf("Текущий баланс: %.2f\n", balance);
            }
            else {
                printf("Сумма должна быть положительной\n");
            }
            break;

        case 2:
            printf("Введите сумму снятия: ");
            scanf("%lf", &summ);

            if (summ > balance) {
                fprintf(f, "%s | %-12s | %10.2f | ОТКАЗ\n",
                    time_buf, "Снятие", summ);
                printf("Недостаточно средств\n");
            }
            else if (summ > 0) {
                balance -= summ;
                fprintf(f, "%s | %-12s | %10.2f | Баланс: %10.2f\n",
                    time_buf, "Снятие", -summ, balance);
                printf("Успешно. Текущий баланс: %.2f\n", balance);
            }
            else {
                printf("Сумма должна быть положительной\n");
            }
            break;

        default:
            printf("Неверный выбор операции\n");
            break;
        }
        fclose(f);

    } while (deystvie != 0);

    printf("\nИтоговый баланс: %.2f\n", balance);

    return 0;
}