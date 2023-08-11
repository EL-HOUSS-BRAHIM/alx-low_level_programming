#include <stdio.h>
/**
* main - Entry point of the program
* Return: Always 0 (Success)
*/
int main(void)
{
char letter;
for (letter = 'a'; letter <= 'z'; letter++)
{
putchar(letter);
}
char LETTER;
for (LETTER = 'A'; LETTER <= 'Z'; LETTER++)
{
putchar(LETTER);
}
putchar('\n');
return (0);
}
