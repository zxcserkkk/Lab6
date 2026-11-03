#define _CRT_SECURE_NO_WARNINGS
#include <locale.h>
#include <stdio.h>

int interval(double num);

int main()
{
    setlocale(LC_ALL, ".UTF-8");

    double a, b, c;
    int count = 0;

    puts("Введите первое число");
    scanf("%lf", &a);
    puts("Введите второе число");
    scanf("%lf", &b);
    puts("Введите третье число");
    scanf("%lf", &c);

    puts("Числа из интервала (-1, 1):");
    if (interval(a)) {
        printf("%g\n", a);
        count++;
    }
    if (interval(b)) {
        printf("%g\n", b);
        count++;
    }
    if (interval(c)) {
        printf("%g\n", c);
        count++;
    }
    if (count == 0) {
        puts("Нет чисел из интервала (-1, 1)");
    }

    return 0;
}

int interval(double num)
{
    int res;
    if (num > -1 && num < 1) {
        res = 1;
    }
    else {
        res = 0;
    }
    return res;
}