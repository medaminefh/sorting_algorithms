#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * selection_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: The size of the array
 */
void selection_sort(int *array, size_t size)
{
	size_t i;
	size_t a;
	int temp;
	int swap;
	int f;

	if (array != NULL && size > 1)
	{
		for (i = 0; i < size; i++)
		{
			temp = i;
			f = 0;
			for (a = i + 1; a < size; a++)
			{
				if (array[temp] > array[a])
				{
					temp = a;
					f++;
				}
			}
			swap = array[i];
			array[i] = array[temp];
			array[temp] = swap;
			if (f != 0)
				print_array(array, size);
		}
	}
}
