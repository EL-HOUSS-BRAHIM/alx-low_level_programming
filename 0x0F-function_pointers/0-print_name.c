#include "function_pointers.h"
#include <stdlib.h>
/**
 * print_name - prints a name based on the provided function
 * @name: name to be printed
 * @f: function pointer to specify the printing format
 *
 * Return: None
 */
void print_name(char *name, void (*f)(char *))
{
if (name != NULL && f != NULL)
f(name);
}
