#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * bubble_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: Number of elements in @array
 */
void bubble_sort(int *array, size_t size)
{
	size_t i;
	size_t j;
	int old_num;

	if (array != NULL && size > 0)
	{
		for (i = 0; i < size - 1; i++)
		{
			for (j = 0; j < size - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					old_num = array[j + 1];
					array[j + 1] = array[j];
					array[j] = old_num;

					print_array(array, size);
				}
			}
		}
	}
}
