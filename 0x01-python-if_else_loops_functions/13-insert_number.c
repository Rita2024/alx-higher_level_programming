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
	listint_t *current_node = *head;

	listint_t *prev = NULL;

	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = number;
	new_node->next = NULL;

	if (!current_node || number < current_node->n)
	{
		new_node->next = current_node;
		*head = new_node;
		return (new_node);
	}

	while (current_node && number > current_node->n)
	{
		prev = current_node;
		current_node = current_node->next;
	}

	new_node->next = current_node;
	prev->next = new_node;

	return (new_node);
}
