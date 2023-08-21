#include "main.h"
#include <stdio.h>

/**
 * print_rev - function that prints a string, in reverse.
 * @s: a string.
 * @length: the length of the string.
 * @i: print the string in reverse
 * Return: Print string.
 */
void print_rev(char *s)
{
int i;
int length = 0;
while (s[length] != '\0')
{
length++;
}
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
