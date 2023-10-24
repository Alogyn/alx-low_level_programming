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
	listint_t *prev = NULL;
	listint_t *current = *head;
	listint_t *next = NULL;

	/* Save, move and reverse the nodes */
	while (current != NULL)
	{
		next = current->next;
		current->next = prev;
		prev = current;
		current = next;
	}

	/* Update the head to the new first node */
	*head = prev;
	return (*head);
}
