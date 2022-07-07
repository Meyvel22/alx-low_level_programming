#include "lists.h"

/**
 * insert_dnodeint_at_index - inserts a node node at a given position
 * in a dlistint_t list.
 * @h: pointer to the list.
 * @idx: position to add the node.
 * @n: data for the new node.
 *
 * Return: the address of the new node, or NULL if it failed
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *final_node = *h, *current_node;
	unsigned int index, count = 0;

	/* create node */
	current_node = malloc(sizeof(dlistint_t));
	if (current_node == NULL)
		return (NULL);
	current_node->n = n;

	/* border case for insert at the beginning */
	if (idx == 0)
	{
		current_node->prev = NULL;
		current_node->next = *h;
		if (*h)
			(*h)->prev = current_node;
		*h = current_node;
		return (*h);
	}

	/* search of position to insert */
	index = idx - 1;
	while (final_node && count != index)
	{
		count++;
		final_node = final_node->next;
	}

	/* general case */
	if (count == index && final_node)
	{
		current_node->prev = final_node;
		current_node->next = final_node->next;
		if (final_node->next)
			final_node->next->prev = current_node;
		final_node->next = current_node;
		return (current_node);
	}
	free(current_node);
	return (NULL);
}
