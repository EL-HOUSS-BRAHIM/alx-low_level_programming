#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
int num1, num2;
for (num1 = 0; num1 <= 99; num1++)
{
for (num2 = 0; num2 <= 99; num2++)
{
if (num1 <= num2)
{
if (num1 < 10)
{
putchar('0');
putchar('0' + num1);
}
else
{
putchar('0' + num1 / 10);
putchar('0' + num1 % 10);
}
putchar(' ');
if (num2 < 10)
{
putchar('0');
putchar('0' + num2);
}
else
{
putchar('0' + num2 / 10);
putchar('0' + num2 % 10);
}
if (num1 != 99 || num2 != 98)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return 0;
}
