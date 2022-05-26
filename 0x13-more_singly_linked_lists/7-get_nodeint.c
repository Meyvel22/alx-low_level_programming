#include "lists.h"

/**
 * *get_nodeint_at_index - function that returns the nth node of a linked list
 * @head: head of the listint_t list
 * @index: index of the node, starting at 0
 *
 * Return: nth node of a listint_t list, if node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int x;

	for (x = 0; x < index && head != NULL; x++)
	{
		head = head->next;
	}

	return (head);
}
