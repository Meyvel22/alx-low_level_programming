#include "lists.h"

/**
 * free_listp2 - function that frees a linked list
 * @head: head of linked list
 *
 * Return: void
 */

void free_listp2(listp_t **head)
{
	listp_t *loose;
	listp_t *idle;

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

/**
 * free_listint_safe - function that frees a listint_t linked list.
 * @h: head of the listint_t list
 *
 * Return: the size of the list that was free'd.
 */

size_t free_listint_safe(listint_t **h)
{
	size_t apex = 0;
	listp_t *hptr, *mint, *join;
	listint_t *idle;

	hptr = NULL;
	while (*h != NULL)
	{
		mint = malloc(sizeof(listp_t));

		if (mint == NULL)
			exit(98);

		mint->p = (void *)*h;
		mint->next = hptr;
		hptr = mint;

		join = hptr;

		while (join->next != NULL)
		{
			join = join->next;
			if (*h == join->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (apex);
			}
		}

		idle = *h;
		*h = (*h)->next;
		free(idle);
		apex++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (apex);
}
