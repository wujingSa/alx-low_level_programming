#include "lists.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_list - print all element in a singly linked list
 *
 * @h: head of the list
 * Return: total number of nodes in the list
 */
size_t print_list(const list_t *h)
{
	size_t i;

	if (h == NULL)
		return (0);

	for (i = 1; h != NULL; i++)
	{
		if (h->str == NULL)
		{
			printf("[%u] %s\n", h->len, "(nil)");
		}
		else
		{
			printf("[%u] %s\n", h->len, h->str);
		}
		h = h->next;
	}
	return (i);
}
