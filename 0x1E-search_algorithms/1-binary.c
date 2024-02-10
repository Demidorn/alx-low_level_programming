#include "search_algos.h"

/**
 * binary_search - searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value:  the value to search for
 *
 * Return:  if array is NULL,return -1 else  index where value is located
 */

int binary_search(int *array, size_t size, int value)
{
	size_t t, prev, next;

	if (array == NULL)
		return (-1);

	for (prev = 0, next = size - 1; next >= prev;)
	{
		printf("searching in array:");
		for (t = prev; t < next; t++)
			printf("%d, ", array[t]);
		printf("%d\n", array[t]);

		t = prev + (next - prev) / 2;
		if (array[t] == value)
			return (t);
		if (array[t] > value)
			next = t - 1;
		else
			prev = t + 1;
	}
	return (-1);
}
