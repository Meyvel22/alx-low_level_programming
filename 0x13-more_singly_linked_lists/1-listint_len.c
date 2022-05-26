#include "lists.h"

/**
 * listint_len - function that returnsthe number of elements in a linked list
 * @h: pointer the linked list
 *
 * Return: number of elements in a linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t apex;

	apex = 0;
	while (h)
	{
		h = h->next;
		apex++;
	}

	return (apex);
}
