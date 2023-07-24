#include "sort.h"
#include "swap.c"

/**
 * bubble_sort - this sorts an array of integers in ascending order
 * @array: Is array of integers to sort
 * @size: Is the size of array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i = 0, change = 1;

	if (!array || size < 2)
		return;

	while (change == 1) 
	{
		change = 0;
		for (i = 0; i < size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				change = 1;
				swap(array, i);
				print_array(array, size);
			}
		}
		if (change == 0) 
			return;
	}
}
