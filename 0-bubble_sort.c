#include "sort.h"
#include <stddef.h>
#include <stdio.h>

void bubble_sort(int *array, size_t size)
{
	int swap;
	size_t i = 0;
	size_t j = 0;

	while (i < size - 1)
	{
		while (j < (size - i - 1))
		{
			if (array[i] > array[i + 1])
			{
				swap = array[i];
				array[i] = array[i + 1];
				array[i + 1] = swap;
				print_array(array, size);
			}
			j++;
		}
		i++;
	}
}
