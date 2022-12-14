#include "sort.h"
/**
 * bubble_sort - Sorting an array with the bubble algorith
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	int i;
	int temp;
	bool swap = false;

	if (size < 2)
		return;

	while (!swap)
	{
		swap = true;
		for (i = 0; i < (int)size - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = false;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				print_array(array, size);
			}
		}
	}
}
