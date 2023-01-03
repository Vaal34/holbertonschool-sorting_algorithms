#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

void insertion_sort_list(listint_t **list);
{
	listint_t nextnode;
	listint_t *tmp;
	int i = 0, y = 0;
	int number = list->n;

	while (list)
	{
		nextnode = list->next;
		if (nextnode < number)
		{
			tmp = list;
			while (tmp)
			{
				if (tmp->n < nextnode)
				{
					tmp->n = nextnode;
					list->n = tmp->n;
					
			}
		}
	}
}
