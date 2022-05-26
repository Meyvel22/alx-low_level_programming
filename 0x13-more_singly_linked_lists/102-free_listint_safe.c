#include "lists.h"

size_t looped_listint_count(listint_t *head);
size_t free_listint_safe(listint_t **h);

/**
 * looped_listint_count - Counts the number of unique nodes
 *                      in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 *         Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_count(listint_t *head)
{
	listint_t *coot, *buck;
	size_t apex = 1;

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
 * free_listint_safe - Frees a listint_t list safely (ie.
 *                     can free lists containing loops)
 * @h: A pointer to the address of
 *     the head of the listint_t list.
 *
 * Return: The size of the list that was freed.
 *
 * Description: The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *tmp;
	size_t apex, index;

	apex = looped_listint_count(*h);

	if (apex == 0)
	{
		for (; h != NULL && *h != NULL; apex++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}
	}

	else
	{
		for (index = 0; index < apex; index++)
		{
			tmp = (*h)->next;
			free(*h);
			*h = tmp;
		}

		*h = NULL;
	}

	h = NULL;

	return (apex);
}
