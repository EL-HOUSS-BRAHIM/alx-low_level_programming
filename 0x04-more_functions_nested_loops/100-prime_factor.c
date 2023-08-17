#include <stdio.h>
#include <math.h>

/**
 * main - finds and prints the largest prime factor of the number 612852475143
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long int k;
	long int max;
	long int j;

	k = 612852475143;
	max = -1;

	while (k % 2 == 0)
	{
		max = 2;
		k /= 2;
	}

	for (j = 3; j <= sqrt(k); j = j + 2)
	{
		while (k % j == 0)
		{
			max = j;
			k = k / j;
		}
	}

	if (k > 2)
		max = k;

	printf("%ld\n", max);

	return (0);
}
