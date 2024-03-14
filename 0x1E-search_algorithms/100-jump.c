#include "search_algos.h"
#include <math.h>

/**
 * jump_search - Performs a Jump Search
 *
 * @array: The array to be searched in
 * @size: Size of the array
 * @value: Value to search for
 * Return: first index.
 */
int jump_search(int *array, size_t size, int value)
{
	int index, M, d, prev;

	if (array == NULL || size == 0)
		return (-1);

	M = (int)sqrt((double)size);
	d = 0;
	prev = index = 0;

	do {
		printf("Value checked array[%d] = [%d]\n", index, array[index]);

		if (array[index] == value)
			return (index);
		d++;
		prev = index;
		index = d * M;
	} while (index < (int)size && array[index] < value);

	printf("Value found between indexes [%d] and [%d]\n", prev, index);

	for (; prev <= index && prev < (int)size; prev++)
	{
		printf("Value checked array[%d] = [%d]\n", prev, array[prev]);
		if (array[prev] == value)
			return (prev);
	}

	return (-1);
}

