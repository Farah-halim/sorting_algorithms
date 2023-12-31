#include "sort.h"
/**
 * bubble_sort - bubble sort algorithm
 * @array: The array to be sorted
 * @size: size of array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, j;
	int tmp;

	if (size > 0 && array != NULL)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i - 1; j++)
			{
				if (array[j] > array[j + 1])
				{
					tmp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = tmp;
					print_array(array, size);
				}
			}
		}
	}
}
