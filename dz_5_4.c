//Домашнее задание №5
//Задача 4. Сумма от 1 до N
//Составить функцию, которая определяет сумму всех чисел от 1 до N и
//привести пример ее использования.

#include <stdio.h>
int summa(int N)
{
int result = 0;
int i=1;
    while (i <= N){
    result += i;
    i++;
                  }
 return result;
}

int main()
{
int n;
 scanf("%d", &n);
 printf("%d", summa(n));
 return 0;
}
