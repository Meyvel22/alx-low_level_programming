#include "lists.h"

/**
 * delete_nodeint_at_index - function that deletes the node at index if a list
 * @head: head of  the listint_t list
 * @index: the index of the node that should be deleted
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int x;
	listint_t *prior;
	listint_t *after;

	prior = *head;

	if (index != 0)
	{
		for (x = 0; x < index - 1 && prior != NULL; x++)
		{
			prior = prior->after;
		}
	}

	if (prior == NULL || (prior->after == NULL && index != 0))
	{
		return (-1);
	}

	after = prior->after;

	if (index != 0)
	{
		prior->after = after->after;
		free(after);
	}
	else
	{
		free(prior);
		*head = after;
	}

	return (1);
}
