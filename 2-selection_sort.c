#include "sort.h"

/**
 * selection_sort - sorting an array in acending order
 * @array: pointer to array
 * @size: size of the array
 * Return: Always 0
 */
void selection_sort(int *array, size_t size)
{
	size_t i, j;
	int min;

	for (i = 0; i < size - 1; i++)
	{
		for (j = i + 1; j < size; j++)
		{
			if (array[i] > array[j])
			{
				min = array[j];
				array[j] = array[i];
				array[i] = min;
				print_array(array, size);
			}

		}

	}
}
