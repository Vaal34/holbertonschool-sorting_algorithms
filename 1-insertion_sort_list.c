#include <stdio.h>
#include <stdlib.h>
#include "sort.h"
/**
 * size_list - returns the number of nodes in a doubly linked list
 * @list: pointer to the head of the list
 *
 * Return: the number of nodes in the list, or 0 if the list is empty
 */
int size_list(const listint_t *list)
{
    int count = 0;

    while (list)
    {
        count++;
        list = list->next;
    }

    return count;
}


/**
 * insertion_sort_list - sorts a doubly linked list of integers in ascending order
 *                      using the insertion sort algorithm
 * @list: pointer to a pointer to the head of the list
 */
void insertion_sort_list(listint_t **list)
{
    listint_t *node = *list;  /* current node being examined */
    listint_t *prev, *next;  /* previous and next nodes */
    int count = 0;  /* counter to keep track of the number of nodes processed */

    /* loop through each node in the list */
    while (count < size_list(*list))
    {
        next = node->next;  /* store the next node */
        prev = node->prev;  /* store the previous node */

        /* if the previous node exists and its value is greater than the current node's value */
        if (prev && prev->n > node->n)
        {
            /* swap the nodes */
            if (prev->prev)  /* if the previous node has a predecessor */
            {
                prev->prev->next = node;  /* update the predecessor's next pointer */
            }
            else  /* if the previous node is the first in the list */
            {
                *list = node;  /* update the head of the list */
            }
            node->prev = prev->prev;  /* update the current node's prev pointer */
            prev->prev = node;  /* update the previous node's prev pointer */
            node->next = prev;  /* update the current node's next pointer */
            prev->next = next;  /* update the previous node's next pointer */

            print_list(*list);  /* print the updated list */

            /* move back to the beginning of the list */
            node = *list;
            count = 0;  /* reset the counter */
            continue;
        }

        /* move to the next node */
        node = next;
        count++;  /* increment the counter */
    }
}

