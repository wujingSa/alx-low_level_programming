#include "search_algos.h"

/**
  * binary_search - Hunts for a value within a sorted array
  *                 of integers using the binary search technique.
  * @array: A pointer to the first element of the array to explore.
  * @size: The quantity of elements in the array.
  * @value: The sought-after value.
  *
  * Return: If the value is not found or the array is NULL, -1.
  *         Otherwise, the index where the value is situated.
  *
  * Description: Displays the [sub]array being scrutinized after each modification.
  */

int binary_search(int *array, size_t size, int value)
{
	size_t i, left, right;

	if (array == NULL)
		return (-1);

	for (left = 0, right = size - 1; right >= left;)
	{
		printf("Searching in array: ");
		for (i = left; i < right; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[i]);

		i = left + (right - left) / 2;
		if (array[i] == value)
			return (i);
		if (array[i] > value)
			right = i - 1;
		else
			left = i + 1;
	}

	return (-1);
}
