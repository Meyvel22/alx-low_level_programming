#include "lists.h"

/**
 * *add_nodeint - function that adds a new nodes at the beginning of a list
 * @head: head of the linked list
 * @n: constant integer
 *
 * Return: the address of new element or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *mint;

	mint = malloc(sizeof(listint_t));

	if (mint == NULL)
		return (NULL);

	mint->n = n;
	mint->next = *head;
	*head = mint;

	return (*head);
}
