#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - Concatenates all arguments into a single string.
 * @ac: The number of arguments.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
int total_len = 0;
char *concatenated;
int i;
int arg_len;
int index;
if (ac <= 0 || av == NULL)
return (NULL);
for (i = 0; i < ac; i++)
{
arg_len = 0;
while (av[i][arg_len])
{
arg_len++;
}
total_len += arg_len + 1;
}
concatenated = malloc(total_len + 1);
if (concatenated == NULL)
return (NULL);
index = 0;
for (i = 0; i < ac; i++)
{
arg_len = 0;
while (av[i][arg_len])
{
concatenated[index] = av[i][arg_len];
index++;
arg_len++;
}
concatenated[index] = '\n';
index++;
}
concatenated[index] = '\0';
return (concatenated);
}
