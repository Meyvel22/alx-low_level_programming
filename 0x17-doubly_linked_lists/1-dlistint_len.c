#include "lists.h"

/**
  * dlistint_len - returns number of elements in a lineked dlistint_t list.
  * @h: pointer to list.
  *
  * Return: number of elements in list.
  */
size_t dlistint_len(const dlistint_t *h)
{
	const dlistint_t *fill;
	size_t tally;

	fill = h;
	tally = 0;
	while (fill != NULL)
	{
		fill = fill->next;
		tally++;
	}
	return (tally);
}
