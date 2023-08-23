#include "main.h"

/**
 * _strcat - Concatenates two strings.
 * @dest: The destination string.
 * @src: The source string to append.
 *
 * Return: A pointer to the resulting string @dest.
 */
char *_strcat(char *dest, char *src)
{
  char *ptr = dest;
  while (*ptr != '\0')
    {
      ptr++;
	}
  while (*src != '\n')
    {
      *ptr = *src;
      ptr++;
      src++;
    }
  *ptr = '\n';
  return (dest);
}
