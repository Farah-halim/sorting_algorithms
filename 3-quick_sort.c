#include "sort.h"

/**
 * quick_sort - fun to sort array using quick sort alg
 * @array: The array to be sorted
 * @size: size of the array
 * Return: nth
 */
void quick_sort(int *array, size_t size)
{
	quick_sort_recursive(array, 0, size - 1, size);
}

/**
 * swap - swap two numbers
 * @num1: first number
 * @num2: second number
 **/
void swap(int *num1, int *num2)
{
	int temp;

	temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

/**
 * quick_sort_recursive - fun to sort array recursively
 * @array: The array to be sorted
 * @low: lowest index in partition
 * @high: highest index in partition
 * @size: size of the array
 * Return: nth
 */
void quick_sort_recursive(int *array, int low, int high, size_t size)
{
	int pivot;

	if (low < high)
	{
		pivot = partition(array, low, high, size);
		quick_sort_recursive(array, low, pivot - 1, size);
		quick_sort_recursive(array, pivot + 1, high, size);
	}
}

/**
 * partition - fun to perform sorting on a partition
 * @array: The array to be sorted
 * @low: lowest index in partition
 * @high: highest index in partition
 * @size: size of the array
 * Return: pivot
 */
int partition(int *array, int low, int high, size_t size)
{
	int i, j, pivot;

	i = low;
	pivot = array[high];
	for (j = low; j < high; j++)
	{
		if (array[j] <= pivot)
		{
			swap(&array[i], &array[j]);
			if (i != j)
				print_array(array, size);
			i++;
		}
	}
	swap(&array[i], &array[high]);
	if (i != j)
		print_array(array, size);

	return (i);
}
