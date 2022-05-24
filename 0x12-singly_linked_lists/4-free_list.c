#include "lists.h"

/**
 * free_list - function that frees a list_t list
 * @head: head of list
 *
 * Return: void
 */

void free_list(list_t *head)
{
	list_t *present;

	while ((present = head) != NULL)
	{
		head = head->next;
		free(present->str);
		free(present);
	}
}
