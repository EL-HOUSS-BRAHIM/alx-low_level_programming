#include "function_pointers.h"
#include <stdlib.h>
/**
 * int_index - searches for an integer in an array
 * @array: the array to search
 * @size: the number of elements in the array
 * @cmp: a pointer to the comparison function
 * Return: the index of the first element for which cmp returns non-zero
 *         -1 if no element matches or size is <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
if (array != NULL && cmp != NULL && size > 0)
{
int i;
for (i = 0; i < size; i++)
{
if (cmp(array[i]) != 0)
{
return (i);
}
}
}
return (-1);
}
