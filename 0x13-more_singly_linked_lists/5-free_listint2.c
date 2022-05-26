#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list
 * @head: head of listint_t list
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *loose;
	listint_t *idle;

	if (head != NULL)
	{
		idle = *head;
		while ((loose = idle) != NULL)
		{
			idle = idle->next;
			free(loose);
		}
		*head = NULL;
	}
}
