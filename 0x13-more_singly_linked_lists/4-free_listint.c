#include "lists.h"

/**
 * free_listint - function that frees a listint_t list
 * @head: head of the listint_t list
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *loose;

	while ((loose = head) != NULL)
	{
		head = head->next;
		free(loose);
	}
}
