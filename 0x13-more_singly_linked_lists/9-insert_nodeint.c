#include "lists.h"

/*
 * Task 9. Insert
 */

/**
  * insert_nodeint_at_index - Inserts a new node at a given position
  *
  * @head: Pointer to the pointer to the head of the list
  * @idx: Index where the new node should be added (int)
  * @n: Data value for the new node (int)
  *
  * Return: The address of the new node, NULL if fail
  */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	/* new node, current and loop variable declaration */
	listint_t *new_node, *current;
	unsigned int i;

	/* Allocate memory */
	new_node = malloc(sizeof(listint_t));

	/* In case allocated memory fail */
	if (!new_node)
		return (NULL);

	/* Set the data value for the new node */
	new_node->n = n;

	/* Inserting at the beginning of the list */
	if (!idx)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* Find the node at position idx - 1 */
	current = *head;
	for (i = 0; i < idx - 1 && current; i++)
		current = current->next;

	/* in case idx out of bound */
	if (!current)
	{
		free(new_node);
		return (NULL);
	}

	/* Insert the new node at the specified index */
	new_node->next = current->next;
	current->next = new_node;

	return (new_node);
}
