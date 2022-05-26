#include "lists.h"

/**
 * pop_listint - function that deletes the head node
 * @head: head of listint_t list
 *
 * Return: integer
 */

int pop_listint(listint_t **head)
{
	int fact;
	listint_t *kill;
	listint_t *erase;

	if (*head == NULL)
		return (0);

	erase = *head;

	fact = erase->n;

	h = erase->next;

	free(erase);

	*head = kill;

	return (fact);
}
