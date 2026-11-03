# Домашнее задание к работе 6
## Условие задачи
Даны три вещественных числа. Выбрать из них те, которые
принадлежат интервалу (-1, 1).
**Вариант 13**

## Алгоритм
**Начало**
- Ввести три вещественных числа: A, B, C.
- Проверить A: если -1 < A < 1, вывести A.
- Проверить B: если -1 < B < 1, вывести B.
- Проверить C: если -1 < C < 1, вывести C.
- Если ни одно не подошло вывести сообщение «Нет чисел из интервала (-1, 1)».
**Конец**

### Блок-схема

![BlokShema6.png]([https://github.com/zxcserkkk/Lab2Korenev/blob/master/Lab2%20Diag.png](https://github.com/zxcserkkk/Lab6/blob/master/BlokShema6.png](https://github.com/zxcserkkk/Lab6/blob/master/BlokShema6.png?raw=true)))
  

## Код

```c
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
    if (num > -1 && num < 1)
        res = 1;
    else 
        res = 0;
    return res;
}
```
## Информация о разработчике

Коренев Сергей, группа бИД-261 подгруппа 2

