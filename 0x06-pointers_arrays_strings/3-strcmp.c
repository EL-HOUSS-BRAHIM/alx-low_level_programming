#include "main.h"
/**
 * _strcmp - Compares two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: An integer less than, equal to, or greater than 0, depending on
 * the comparison result (similar to strcmp).
 */
int _strcmp(char *s1, char *s2)
{
  while (*s1 != '\0' && *s2 != '\0' && *s1 == *s2)
    {
      s1++;
      s2++;
    }
  return (int)(*s1) - (int)(*s2);
}