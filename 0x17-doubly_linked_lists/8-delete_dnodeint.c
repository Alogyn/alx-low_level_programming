#include "lists.h"

/* Task 8. Delete at index */

/**
  * delete_dnodeint_at_index - deletes the node at index of a
  * dlistint_t linked list
  *
  * @head: pointer to a pointer to the head of the list
  * @index: index of the node that should be deleted
  *
  * Return: 1 if it succeeded, -1 if it failed
  */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp, *current = *head;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = current->next;
		if (*head != NULL)
			(*head)->prev = NULL;
		free(current);
		return (1);
	}

	while (current != NULL && i < index - 1)
	{
		current = current->next;
		i++;
	}

	if (current == NULL || current->next == NULL)
		return (-1);

	temp = current->next->next;
	free(current->next);

	if (temp != NULL)
		temp->prev = current;

	current->next = temp;

	return (1);
}
