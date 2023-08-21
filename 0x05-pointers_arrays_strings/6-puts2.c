#include "main.h"
#include <stdio.h>

/**
 * puts2 - a function that prints a string.
 * @str: a string.
 * Return: Print string of even numbers.
 */
void puts2(char *str)
{
int i = 0;
while (str[i] != '\0')
{
if (i % 2 == 0)
{
_putchar(str[i]);
}
i++;
}
putchar('\n');
}
