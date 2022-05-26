#include "lists.h"

/**
 * sum_listint - function that returns the sum of all the data(n) of a list.
 * @head: head of the listint_t list.
 *
 * Return: sum of all data(n) of a linked list, if the list is empty return 0
 **/
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
