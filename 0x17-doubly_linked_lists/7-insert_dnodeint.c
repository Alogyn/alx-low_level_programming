#include "lists.h"

/* Task 7. Insert at index */

/**
  * insert_dnodeint_at_index - Inserts a new node at a given position
  *
  * @h: Pointer to a pointer to the head of the list
  * @idx: Index of the list where the new node should be added
  * @n: Value to be added to the new node
  *
  * Return: The address of the new node, or NULL if it failed
  */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp = *h;
	unsigned int i = 0;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;

	while (temp != NULL && i < idx - 1)
	{
		temp = temp->next;
		i++;
	}

	if (temp == NULL && i == idx - 1)
	{
		free(new_node);
		return (add_dnodeint_end(h, n));
	}
	else if (temp != NULL)
	{
		new_node->next = temp->next;
		new_node->prev = temp;
		if (temp->next != NULL)
			temp->next->prev = new_node;
		temp->next = new_node;
		return (new_node);
	}

	free(new_node);
	return (NULL);
}
