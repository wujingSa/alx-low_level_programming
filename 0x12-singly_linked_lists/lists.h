#ifndef _LISTS_H_
#define _LISTS_H_

#include <stddef.h>
#include <stdlib.h>
#include <string.h>

/**
 * struct list_s - Represents a node in a singly linked list
 * @str: A dynamically allocated string
 * @len: The length of the string
 * @next: A pointer to the next node in the list
 *
 * Description: Defines the structure of a node in a singly linked list
 */

typedef struct list_s
{
	char *str;
	unsigned int len;
	struct list_s *next;
} list_t;

size_t print_list(const list_t *h);
size_t list_len(const list_t *h);
list_t *add_node(list_t **head, const char *str);
list_t *add_node_end(list_t **head, const char *str);

#endif
