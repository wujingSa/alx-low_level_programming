#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * list_len - lenght of the list
 * @h: pointer to the first node
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
	size_t num_elements = 0;

	while (h != NULL)
	{
		h = h->next;
		num_elements++;
	}
	return (num_elements);
}
