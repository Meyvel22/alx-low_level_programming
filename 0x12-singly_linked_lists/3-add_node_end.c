#include "lists.h"

/**
 * *add_node_end - function that adds a new node at the end of a list_t list
 * @head: the head of list
 * @str: the string pointer
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *fresh, *finish;
	size_t fch;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	fresh->str = strdup(str);

	for (fch = 0; str[fch]; fch++)
		;

	fresh->len = fch;
	fresh->next = NULL;
	finish = *head;

	if (finish != NULL)
	{
		while (finish->next != NULL)
			finish = finish->next;
		finish->next = fresh;
	}
	else
		*head = fresh;

	return (*head);
}
