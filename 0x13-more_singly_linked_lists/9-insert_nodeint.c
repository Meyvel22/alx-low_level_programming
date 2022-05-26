#include "lists.h"

/**
 * *insert_nodeint_at_index - function that inserts new node at given position
 * @head: head of the listint_t list
 * @idx: unsigned integer
 * @n: integer
 *
 * Return: address of the new node or NULL if it failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *mint;
	listint_t *fill;

	fill = *head;

	if (fill == NULL && idx != 0)
		return (NULL);

	mint = malloc(sizeof(listint_t));
	if (mint == NULL)
		return (NULL);

	mint->n = n;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && fill != NULL; x++)
		{
			fill = fill->next;
		}
	}

	if (idx == 0)
	{
		mint->next = *head;
		*head = mint;
	}
	else
	{
		mint->next = fill->next;
		fill->next = mint;
	}

	return (mint);
}
