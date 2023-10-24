#include "lists.h"

/*
 * Task (Advanced) 11. Reverse list
 */

/**
  * reverse_listint - Reverses a 'listint_t' linked list
  *
  * @head: Pointer to the pointer to the head of the list
  *
  * Return: The pointer to the first node of the reversed list
  */

listint_t *reverse_listint(listint_t **head)
{
	/* Pointers declaration */
	listint_t *prev = NULL, *next;

	if (!head || !*head)
		return (NULL);

	if (!(*head)->next)
		return (*head);

	/* Save, move and reverse the nodes */
	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	/* Update the head to the new first node */
	*head = prev;
	return (*head);
}
