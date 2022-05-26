#include "lists.h"

/**
 * free_listp - function that frees a linked list
 * @head: head of a linked list
 *
 * Return: void
 */

void free_listp(listp_t **head)
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
 * print_listint_safe - function that prints a listint_t linked list.
 * @head: head of listint_t list
 *
 * Return: the number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t apex = 0;
	listp_t *hptr, *mint, *join;

	hptr = NULL;
	while (head != NULL)
	{
		mint = malloc(sizeof(listp_t));

		if (mint == NULL)
			exit(98);

		mint->p = (void *)head;
		mint->next = hptr;
		hptr = mint;

		join = hptr;

		while (join->next != NULL)
		{
			join = join->next;
			if (head == join->p)
			{
				printf("-> [%p] %d\n", (void *)head, head->n);
				free_listp(&hptr);
				return (apex);
			}
		}

		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
		apex++;
	}

	free_listp(&hptr);
	return (apex);
}
