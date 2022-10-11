#include "sort.h"
/**
 * partition- Paritions the array into sub groups: low, pivot, high
 * @array: Holds the array
 * @low: Holds the beginning of the partition
 * @high: Index of the last index of the partition
 * @size: the size of the array
 */

void partition(int *array, int low, int high, size_t size)
{
	int cur;
	int pivot = high;
	int lesser = low;
	int greater = low;

	if (size < 2)
		return;

	for (cur = low; cur <= high; cur += 1)
	{
		if (array[cur] > array[pivot])
			greater += 1;
		if (array[cur] < array[pivot])
		{
			if (cur != lesser)
			{
				swap(array, lesser, cur);
				print_array(array, size);
			}
			lesser += 1;
		}
	}

	/* move pivot to where it belongs */
	if (pivot != lesser && array[pivot] != array[lesser])
	{
		swap(array, pivot, lesser);
		print_array(array, size);
	}
	/* Partition left subgroup */
	if (lesser - 1 > low)
	{
		partition(array, low, lesser - 1, size);
	}
	/* Partition right subgroup */
	if (lesser + 1 < high)
	{
		partition(array, lesser + 1, high, size);
	}
}
