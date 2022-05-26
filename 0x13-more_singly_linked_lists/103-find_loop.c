#include "lists.h"

/**
  * *find_listint_loop - function that finds the loop in a linked list.
  * @head: head of the listint_t list.
  *
  * Return: address of the node where the loop starts or NULL if no loop
  */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *live;
	listint_t *note;

	if (head == NULL)
		return (NULL);

	live = head;
	note = head;
	while (live && note && note->next)
	{
		live = live->next;
		note = note->next->next;
		if (live == note)
		{
			return (note);
		}
	}
	if (live != note)
	{
		return (NULL);
	}
	else
	{
		live = head;
		while (live != note)
		{
			live = live->next;
			note = note->next;
		}
		return (note);
	}
}
