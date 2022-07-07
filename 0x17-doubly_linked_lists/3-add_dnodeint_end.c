#include "lists.h"

/**
 * add_dnodeint_end - adds a new node at the end of a dlistint_t list.
 * @head: pointer to the first element of the list.
 * @n: int to set in the new node.
 *
 * Return: address of the new element, or NULL if it failed
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current;
	dlistint_t *final = *head;

	current = malloc(sizeof(dlistint_t));
	if (current == NULL)
		return (NULL);
	current->n = n;
	current->next = NULL;

	if (final)
	{
		while (final->next)
			final = final->next;
		current->prev = final;
		final->next = current;
	}
	else
	{
		*head = current;
		current->prev = NULL;
	}

	return (current);
}
