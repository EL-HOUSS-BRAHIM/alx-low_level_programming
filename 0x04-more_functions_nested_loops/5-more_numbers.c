#include "main.h"

/**
 * main - check the code.
 * return: void
 */
void more_numbers(void)
{
  int c;
  int j;
  for (c = 0; c < 10; c++)
    {
      for (j = 0; j <= 14; j++)
	{
	  if(j >= 10) {
	    _putchar('0' + j / 10);
	  }
	   _putchar('0' + j % 10);
	}
      _putchar('\n');
    }
}
