#include "sort.h"
#include "swap.c"

/**
 * selection_sort - this sorts an array of integers in ascending order
 * @array: is array of integers to sort
 * @size: is size of array
*/
void selection_sort(int *array, size_t size)
{
	size_t i = 0, j = 0, min = 0;

	if (!array || size < 2)
		return;

	for (i = 0; i < size - 1; i++)
	{
		min = i;
		for (j = i + 1; j < size; j++) 
		{
			if (array[j] < array[min])
				min = j; 
		}

		if (min != i) 
		{
			swap(array, min, i);
			print_array(array, size);
		}
	}
}
