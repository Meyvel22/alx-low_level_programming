#include "lists.h"

/**
 * print_list - a function that prints all the elements of a list_t list
 * @h: pointer to the list
 *
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t tally;

	tally = 0;
	while (h)
	{
		if (!(h->str))
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		tally++;
		h = h->next;
	}

	return (tally);
}
