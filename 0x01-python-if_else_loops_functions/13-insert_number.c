#include "lists.h"

/**
 * insert_node - inserts a number into a sorted singly linked list
 * @head: pointer to the head of the list
 * @number: number to insert
 *
 * Return: the result
 */

listint_t *insert_node(listint_t **head, int number)
{
	listint_t *new_node;
	listint_t *current;
	listint_t *current_prev;

	current = *head;
	new_node = malloc(sizeof(listint_t));

	if (!new_node)
		return (NULL);

	while (current != NULL)
	{
		if (current->n > number)
			break;
		current_prev = current;
		current = current->next;
	}

	new_node->n = number;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
	}
	else
	{
		new_node->next = current;
		if (current == *head)
			*head = new_node;
		else
			current_prev->next = new_node;
	}

	return (new_node);
}
