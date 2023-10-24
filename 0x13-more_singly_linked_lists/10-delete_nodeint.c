#include "lists.h"

/*
 * Task 10. Delete at index
 */

/**
  * delete_nodeint_at_index - Deletes the node at index 'index'
  * of a 'listint_t' linked list
  *
  * @head: Pointer to the pointer to the head of the list
  * @index: Index of the node to be deleted
  *
  * Return: '1' if success, '0' if fail
  */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	/* Current, previous nod and loop variable declaration */
	listint_t *current, *previous;
	unsigned int i;

	/* In case 'head' is empty */
	if (!head || !*head)
		return (-1);

	/* Delete the first node */
	if (index == 0)
	{
		current = *head;
		*head = (*head)->next;
		free(current);
		return (1);
	}

	/* Find the node at the specified index */
	current = *head;
	previous = NULL;

	for (i = 0; current && i < index; i++)
	{
		previous = current;
		current = current->next;
	}

	/*  In case index is out of bound */
	if (!current)
		return (-1);

	/* Delete a node from the middle or end of the list */
	previous->next = current->next;
	free(current);
	return (1);
}
