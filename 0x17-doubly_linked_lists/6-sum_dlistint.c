#include "lists.h"

/**
  * sum_dlistint - returns the sum of all data (n) in the list.
  * @head: pointer to the list.
  *
  * Return: sum of all data.
  */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int sum = 0;

	tmp = head;
	while (tmp != NULL)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}
	return (sum);
}
