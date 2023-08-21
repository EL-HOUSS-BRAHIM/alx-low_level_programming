#include "main.h"

/**
 * _atoi - Converts a string to an integer.
 * @s: The string to be converted.
 *
 * Return: The converted integer.
 */
int _atoi(char *s)
{
int sign = 1;
int result = 0;
if (*s == '-' || *s == '+')
{
if (*s == '-')
{
sign = -1;
}
s++;
}
while (*s >= '0' && *s <= '9')
{
result = result * 10 + (*s - '0');
s++;
    }
return result * sign;
}
