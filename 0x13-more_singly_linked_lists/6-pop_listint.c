#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: head of listint_t list
 *
 * Return: integer
 */

int pop_listint_t(listint_t **head)
{
	int kill;
	listint_t *erase;

	*erase = *head;
	if (!head)
		return (0);

	kill = (*head)->n;
	*head = erase->next;
	free(erase);
	return (kill);
}
