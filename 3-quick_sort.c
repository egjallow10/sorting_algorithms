#include "sort.h"
/**
 * partition- Paritions the array into sub groups: low, pivot, high
 * @array: Holds the array
 * @low: Holds the beginning of the partition
 * @high: Index of the last index of the partition
 * @size: the size of the array
 */

int partition(int *array, int lo, int hi)
{
	int i, j, pivot = array[hi];

	for (j = i = lo; j < hi; j++)
		if (array[j] < pivot)
			swap(&array[i++], &array[j], array, hi + 1);
	swap(&array[i], &array[hi], array, hi + 1);
	return (i);
}

/**
 * quick_sort - sorts an int array using partition-exchange sorting
 * @array: int array to be sorted
 * @size: length of @array
 */
void quick_sort(int *array, size_t size)
{
	if (size > 1)
	{
		int pivot = partition(array, 0, size - 1);

		quick_sort(array, pivot);
		quick_sort(array + pivot + 1, size - pivot - 1);
	}
}


/**
 * swap- swaps two indices
 * @array: Holds the array
 * @a: The first index
 * @b: The second index
 * @size: the int size
 */
void swap(int *a, int *b, int *array, int size)
{
	static int *ptr, s; /* for printing */
	int t = *a;

	if (*a != *b)
	{
		*a = *b;
		*b = t;
		if (!ptr)
			ptr = array, s = size;
		print_array(ptr, s);
	}
}