#include "lists.h"

/**
 * list_len - function that returns the number of elements in a linked list
 * @h: pointer to the list
 *
 * Return: the number of elements in a linked list_t list
 */

size_t list_len(const list_t *h)
{
	size_t tally;

	tally = 0;
	while (h)
	{
		h = h->next;
		tally++;
	}

	return (tally);
}
