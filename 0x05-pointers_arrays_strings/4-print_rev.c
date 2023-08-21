#include "main.h"
#include <stdio.h>

/**
 * print_rev - a function that prints a string, in reverse, followed by a new line.
 * @s: a string.
 * @length: the length of the string.
 * @i: print the string in reverse
 * Return: Print string.
 */
void print_rev(char *s)
{
int length = 0;
while (s[length] != '\0')
{
length++;
}
int i;
for (i = length - 1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
