#include "sort.h"
#include <stddef.h>
#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t i = 0, j = 0;

	for (j = 0; j < size - 1; j++)
	{
		for (i = 0; i < (size - j - 1); i++)
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				print_array(array, size);
			}
		}
	}
}
