#include "main.h"
#include <stdio.h>

/**
 * puts_half - a function that prints a string.
 * @str: a string.
 * Return: Print string of even numbers.
 */
void puts_half(char *str)
{
int i = 5;
while (str[i] != '\0')
{
if (i <= 9)
{
_putchar(str[i]);
}
i++;
}
putchar('\n');
}
