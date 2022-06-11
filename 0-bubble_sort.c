#include "sort.h"

/**
* bubble_sort - Sort an array in ascending order with Bubble algorithm
*
* @array: array to sort
* @size: size of the array
*/
void bubble_sort(int *array, size_t size)
{
	size_t i, x = 0;
	int changes, tmp = 0;

	if (!array)
		return;

	x = size - 1;
	while (changes)
	{
		changes = 0;
		for (i = 0; i < x; i++)
		{
			if (array[i] > array[i + 1])
			{
				tmp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = tmp;
				print_array(array, size);
			}
		}
		x--;
	}
}
