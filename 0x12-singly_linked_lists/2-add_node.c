#include "lists.h"

/**
 * *add_node - function that adds a new node at the beginning of a list_t list
 * @head: head of a list
 * @str: string pointer
 *
 * Return: the address of the new element, or NULL if it failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *fresh;
	size_t fch;

	fresh = malloc(sizeof(list_t));
	if (fresh == NULL)
		return (NULL);

	fresh->str = strdup(str);

	for (fch = 0; str[fch]; fch++)
		;

	fresh->len = fch;
	fresh->next = *head;
	*head = fresh;

	return (*head);
}
