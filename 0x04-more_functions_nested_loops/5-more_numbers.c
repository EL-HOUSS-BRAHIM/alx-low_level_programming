#include "main.h"

/**
 * more_numbers - Prints a sequence of numbers.
 */
void more_numbers(void)
{
    int c;
    int j;

    for (c = 1; c < 10; c++)
    {
        for (j = 0; j <= 14; j++)
        {
            if (j >= 10)
            {
                _putchar('1');
            }
            _putchar(j % 10 + '0');
        }
        _putchar('\n');
    }
}
