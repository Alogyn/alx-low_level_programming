#include "lists.h"

/*
 * Task 5. Free
 */

/**
  * free_listint2 - Frees a listint_t list
  *
  * @head: Pointer to the pointer to the head of the list
  *
  * Return: None
  */

void free_listint2(listint_t **head)
{
	/* Temporary pointer declaration */
	listint_t *temp;

	/* In case 'head' is empty */
	if (!head)
		return;

	while (*head)
	{
		/* Store the current node in 'temp' */
		temp = *head;

		/* Move 'head' to the next node */
		*head = (*head)->next;

		/* Free the memory */
		free(temp);
	}
}
