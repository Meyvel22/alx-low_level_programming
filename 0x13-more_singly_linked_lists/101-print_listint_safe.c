#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *coot, *buck;
	size_t  apex = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	coot = head->next;
	buck = (head->next)->next;

	while (buck)
	{
		if (coot == buck)
		{
			coot = head;
			while (coot != buck)
			{
				apex++;
				coot = coot->next;
				buck = buck->next;
			}

			coot = coot->next;
			while (coot != buck)
			{
				apex++;
				coot = coot->next;
			}

			return (apex);
		}

		coot = coot->next;
		buck = (buck->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t apex, index = 0;

	apex = looped_listint_len(head);

	if (apex == 0)
	{
		for (; head != NULL; apex++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < apex; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (apex);
}
