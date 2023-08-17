#include "main.h"
/**
 * print_line - Prints a line of underscores.
 * @n: The number of times to print the underscore character.
 */
void print_line(int n)
{
  int i;
  if (n <= 0)
    {
      _putchar('\n');
        return;
    }
  for (i = 0; i < n; i++)
    {
      _putchar('_');
    }
  _putchar('\n');
}
