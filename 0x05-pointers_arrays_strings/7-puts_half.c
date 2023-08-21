#include "main.h"
#include <stdio.h>
/**
 * puts_half - a function that prints a string.
 * @str: a string.
 * Return: Print string of even numbers.
 */
void puts_half(char *str)
{
int length = 0;
int half;
int i;
while (str[length] != '\0')
{
length++;
}
 half = (length - 1) / 2;
i = half + 1;
while (str[i] != '\0')
{
if (i <= length)
{
_putchar(str[i]);
}
i++;
}
_putchar('\n');
}
