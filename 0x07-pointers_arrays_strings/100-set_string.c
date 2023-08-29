#include "main.h"

/**
 * set_string - Sets the value of a pointer to a char.
 * @s: Double pointer to the pointer to be updated.
 * @to: Pointer to the new value.
 */
void set_string(char **s, char *to)
{
*s = to;
}
