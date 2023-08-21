#include "main.h"
#include <stdio.h>

/**
 * _puts - a function that prints a string.
 * @str: a string.
 *
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
for (i = length -1; i >= 0; i--)
{
putchar(s[i]);
}
putchar('\n');
}
