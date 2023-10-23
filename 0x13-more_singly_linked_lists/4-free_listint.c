#include "lists.h"

/*
 * Task 4. Free list
 */

/**
  * free_listint - Frees a 'listint_t' list
  *
  *@head: Pointer to the head of the list
  *
  * Return: None
  */

void free_listint(listint_t *head)
{
	/* Temporary pointer declaration */
	listint_t *temp;

	while (head)
	{
		/* Store the current node in 'temp' */
		temp = head;

		/* Move 'head' to the nex node */
		head = head->next;

		/* Free the memory */
		free(temp);
	}
}
