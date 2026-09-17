#include <stdio.h>
#include <locale.h>
int main()
{
    setlocale(LC_CTYPE, "RUS");
    float S = 390.0f;   
    float p1 = 15.0f;    
    float p2 = 36.0f;    
    float x = 3.0f;     
    float Crr = (S / p1) * x;   
    float Cfe = (S / p2) * x;   
    float E = Crr - Cfe;      
    printf("Цена 1 галлона: %.2f фунтов\n", x);
    printf("Стоимость поездки на Роллс-Ройсе: %.2f фунтов\n", Crr);
    printf("Стоимость поездки на Форд-Эскорте: %.2f фунтов\n", Cfe);
    printf("Экономия на Форд-Эскорте: %.2f фунтов\n", E);

    return 0;
}
