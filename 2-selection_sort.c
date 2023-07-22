#include "sort.h"

/**
 * selection_sort - fun to sort array using selection alg
 * @array: The array to be sorted
 * @size: size of the array
 * Return: nth
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j, min_val_idx;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		min_val_idx = i;
		for (j = i + 1; j < size; j++)
		{
			if (array[j] < array[min_val_idx])
				min_val_idx = j;
		}
		temp = array[min_val_idx];
		array[min_val_idx] = array[i];
		array[i] = temp;
		if (min_val_idx != i)
			print_array(array, size);
	}
}
