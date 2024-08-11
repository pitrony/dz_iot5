//Домашнее задание №5
//  Задача 5*. Скобки
//Проверить строку состоящую из скобок "(" и ")" на корректность.
//Данные на входе: На вход подается строка состоящая из символов '(', ')'
//и заканчивающаяся символом '.'. Размер строки не более 1000 символов.
//Данные на выходе: Необходимо напечатать слово YES если скобки
//расставлены верно и NO в противном случае.

  #include <stdio.h>
int main()
{
int opened = 0, closed = 0, first=0;
char input, fl = 0;
 scanf("%c", &input);
 if (input == ')') 
      { first=1; 
      closed++;
            }
else opened++;
 while (1)
   {
   scanf("%c", &input);
   if (input == '.') 
   break;
   if (input == '(') opened++ ;
   if (input==')') closed++;
   }
 (opened == closed) ? printf("YES") : printf("NO");
if (first==1){
     printf("\nFirst simbol is not correct");
            }
 return 0;
}
