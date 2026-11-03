#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>
#include <math.h>

int task_1(int year);
double task_2(double x);

int main()
{
    setlocale(LC_ALL, ".UTF-8");

    int year;
    printf("Введите год: ");
    scanf("%d", &year);
    if (task_1(year))
        printf("Год %d високосный\n", year);
    else
        printf("Год %d не високосный\n", year);

    double x;
    printf("\nВведите x: ");
    scanf("%lf", &x);
    printf("F(%.2lf) = %.3lf, формула: %s\n", x, task_2(x),
        (x > 3) ? "-3x + 9" : "x^3 / (x^2 + 8)");

    return 0;
}

int task_1(int year)
{
    return (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);
}

double task_2(double x)
{
    if (x > 3)
        return -3 * x + 9;
    else
        return pow(x, 3) / (pow(x, 2) + 8);
}