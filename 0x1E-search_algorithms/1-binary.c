#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array using
 *                 the Binary Search algorithm.
 *
 * @array: pointer to the first element of the sorted array to search in.
 * @size: size of the array.
 * @value: value of the element to search for.
 *
 * Return: index of the value if found, otherwise -1.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t left, right, mid, i;

	if (array == NULL || size == 0)
		return (-1);

	left = 0;
	right = size - 1;

	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			if (i != left)
				printf(", ");
			printf("%d", array[i]);
		}
		printf("\n");

		mid = left + (right - left) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}

