#include "sort.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * shell_sort - Prints an array of integers
 *
 * @array: The array to be printed
 * @size: The size of the array
 */
void shell_sort(int *array, size_t size)
{
	size_t i;
	size_t a = 1;
	size_t index;
	int temp;

	if (array != NULL && size > 1)
	{
		while (a < size / 3)
			a = 3 * a + 1;
		while (a >= 1)
		{
			for (i = a; i < size; i++)
			{
				for (index = i; index >= a &&
	(array[index] < array[index - a]); index -= a)
				{
					temp = array[index];
					array[index] = array[index - a];
					array[index - a] = temp;
				}
			}
				print_array(array, size);
				a /= 3;
		}
	}
}
