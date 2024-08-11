//Домашнее задание №5
//Задача 3. Сумма цифр равна произведению
//Составить логическую функцию, которая определяет, верно ли, что в заданном
//числе сумма цифр равна произведению.
//int is_happy_number(int n)

#include <stdio.h>
int summa(int n)
{
    int sum = 0;
    while (n > 0)
    {
 sum += n % 10;
 n /= 10;
    }
 
 return sum;   
 }
 
int multip(int n)
{
int mul = 1;
 while (n > 0)
  {
  mul *= n % 10;
  n /= 10;
  }
 return mul;
}
int is_happy_number(int n)
  {

return (summa(n) == multip(n));
  }
int main()
{
int n;
 scanf("%d", &n);
 is_happy_number(n) ? printf("YES"): printf("NO");
 return 0;
}
