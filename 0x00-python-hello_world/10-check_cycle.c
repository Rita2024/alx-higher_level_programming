#include <stdio.h>
#include "lists.h"

/**
 * check_cycle - checks if a singly linked list has a circle in it.
 * @list: the pointer to the head of the list
 * Return: the result
 */

int check_cycle(listint_t *list)
{
	listint_t *temp = list;
	listint_t *arc = list;

	if (list == NULL)
	{
		return (0);
	}
	while (temp && temp->next)
	{
		arc = arc->next;
		temp = temp->next->next;
		if (arc == temp)
			return (1);
	}
	return (0);
}
