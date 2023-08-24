#include "main.h"
/**
 * reverse_array - Reverses the content.
 * @a: The array of integers.
 * @n: The number of elements in the array.
 *
 * Return: Nothing.
 */
void reverse_array(int *a, int n)
{
int temp;
int start = 0;
int end = n - 1;
while (start < end)
{
temp = a[start];
a[start] = a[end];
a[end] = temp;
start++;
end--;
}
}
