#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
int n1, n2, n3;
for (n1 = 0; n1 <= 7; n1++)
{
for (n2 = n1 + 1; n2 <= 8; n2++)
{
for (n3 = n2 + 1; n3 <= 9; n3++)
{
putchar('0' + n1);
putchar('0' + n2);
putchar('0' + n3);
if (n1 != 7 || n2 != 8 || n3 != 9)
{
putchar(',');
putchar(' ');
}
}
}
}
putchar('\n');
return (0);
}
