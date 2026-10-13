#include <stdio.h>
#include <locale.h>
#include <math.h>

int main() {
	setlocale(LC_CTYPE, "RUS");
	double x, y;
	printf("Введите координаты x и y\n");
	scanf("%lf %lf", &x, &y);

	if (x >= 0 && (pow(x, 2) + pow(y, 2) >= 9) && (pow(x, 2) + pow(y, 2) <= 25)) {
		printf("Точка принадлежит заданной области");
	}
	else {
		printf("Точка не принадлежит заданной области");
	}

	
	return 0;


}