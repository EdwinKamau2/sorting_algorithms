#include "sort.h"
#include "swap.c"

/**
 * qsort - is sorting and partitioning of an array
 * @array: is an array of integers to sort
 * @low: the lower position in the array
 * @high: the array partition
 * @size: the size of array
*/
void qsort(int *array, int low, int high, size_t size)
{
	int j = 0, i = 0, pivot = 0;

	i = low - 1;
	pivot = array[high]; 

	if (low < high)
	{
		for (j = low; j < (int)high; j++) 
		{
			if (array[j] < pivot) 
			{
				i++;
				if (array[j] != array[i])
					swap(array, j, i), print_array(array, size);
			}
		}
		i++;
		swap(array, high, i);
		if (array[high] != array[i])
			print_array(array, size);
		qsort(array, 0, i - 1, size); 
		qsort(array, i + 1, high, size);
	}
}

/**
 * quick_sort - this sorts an array with quick sort algorithm
 * @array: the array of integers to sort
 * @size: the size of array
*/
void quick_sort(int *array, size_t size)
{
	if (!array || size < 2)
		return;

	qsort(array, 0, (int)size - 1, size);
}
