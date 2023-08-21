#include "main.h"
/**
 *swap_int - swaps the values of two integers.
 *@a: Pointer to an integer.
 *@b: Pointer to an integer.
 */
void swap_int(int *a, int *b)
{
int bb = *a;
*a = *b;
*b = bb;
}
