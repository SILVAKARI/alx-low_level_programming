#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the total number of elements in a linked list
 * @h: This is A pointer to the list_t list
 *
 * Return: This returns the number total of elements in h
 */
size_t list_len(const list_t *h)
{
	size_t n = 0;

	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}

