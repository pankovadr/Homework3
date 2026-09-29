#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h> 
#include <locale.h>
int main() 
{
    setlocale(LC_ALL, "RUS");
    double a, b, c;

    printf("Введите длины катетов a и b: ");
    scanf("%lf %lf", &a, &b);

    // Вычисляем по теореме Пифагора
    c = sqrt(a * a + b * b);

    printf("Гипотенуза c = %.2f\n", c);

    return 0;
}
