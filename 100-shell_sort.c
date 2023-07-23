#include "sort.h"

/**
 * shell_sort - fun to sort array using shell sort alg
 * @array: The array to be sorted
 * @size: size of the array
 * Return: nth
 */
void shell_sort(int *array, size_t size)
{
	size_t i, j, h = 1;
	int temp;

	while (h <= (size / 3))
		h = (h * 3) + 1;

	while (h > 0)
	{
		for (i = h; i < size; i++)
		{
			temp = array[i];
			j = i;
			while (j > h - 1 && array[j - h] >= temp)
			{
				array[j] = array[j - h];
				j -= h;
			}
			array[j] = temp;
		}
		h = (h - 1) / 3;
		print_array(array, size);
	}
}
