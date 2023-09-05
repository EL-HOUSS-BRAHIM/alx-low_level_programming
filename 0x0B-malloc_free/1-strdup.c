#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory
 * @str: the string given as a parameter.
 *
 * Return: a pointer to the created array, or NULL if it fails
 */
char *_strdup(char *str)
{
char *duplicate;
unsigned int length = 0;
unsigned int i;
if (str == NULL)
return (NULL);
while (str[length])
length++;
duplicate = malloc((length + 1) * sizeof(char));
if (duplicate == NULL)
return (NULL);
for (i = 0; i < length; i++)
duplicate[i] = str[i];
return (duplicate);
}
