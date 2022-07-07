#include "lists.h"

/**
  * print_dlistint - function that prints all elements of a dlistint_t list
  * @h: pointer to list.
  *
  * Return: number of nodes.
  */
size_t print_dlistint(const dlistint_t *h)
{
	const dlistint_t *fill;
	size_t tally = 0;

	fill = h;
	while (fill != NULL)
	{
		printf("%d\n", fill->n);
		fill = fill->next;
		tally++;
	}
	return (tally);
}
