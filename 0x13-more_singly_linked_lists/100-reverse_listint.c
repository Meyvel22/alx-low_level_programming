#include "lists.h"

/**
 * *reverse_listint - function that reverses a listint_t linked list
 * @head: head of the listint_t list
 *
 * Return: a pointer to thr first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t = *prior;
	listint_t = *after;

	prior = NULL;
	after = NULL;

	while (*head)
	{
		after = (*head)->next;
		(*head)->next = prior;
		prior = *head;
		*head = after;
	}

	*head = prior;
	return (*head);
}
