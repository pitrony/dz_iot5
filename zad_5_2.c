//Домашнее задание №5
//Задача 2. НОД
//Составить функцию, которая определяет наибольший общий делитель двух
//натуральных и привести пример ее использования
//https://younglinux.info/algorithm/euclidean
//int nod(int a, int b)

#include <stdio.h>
int nod(int a, int b)
{
int t;
 while (b != 0)
      {
  t = b;
  b = a % b;
  a = t;
      }
 return a;
}

int main()
{
int a, b;
  printf("Введите два числа a и b ");
  scanf("%d%d", &a, &b);
  printf("\n Наибольший общий делитель: ");
  printf("%d", nod(a, b));
 return 0;
}
