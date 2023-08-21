#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string.
 * @str: a string.
 *
 * Return: Print string.
 */
void _puts(char *str)
{
while (*str != '\0')
{
putchar(*str);
str++;
}
putchar('\n');
}
