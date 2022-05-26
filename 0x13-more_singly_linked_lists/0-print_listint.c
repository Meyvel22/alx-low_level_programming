#include "lists.h"

/**
 * print_listint - function that prints all the elements of a listint_t list
 * @h: pointer to the linked list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t apex = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		apex++;
	}
	return (apex);
}
