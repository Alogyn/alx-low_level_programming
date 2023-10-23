#include "lists.h"

/*
 * Task 6. Pop
 */

/**
  * pop_listint - Deletes the head node of a listint_t linked list,
  * and returns the head node’s data (n)
  *
  * @head: Pointer to the pointer to the head of the list
  *
  * Return: The data (n) of the head node, NULL if empty
  */

int pop_listint(listint_t **head)
{
	/* Store and Temporary pointer declaration  */
	int n = 0;
	listint_t *temp;

	/* In case 'head' is empty */
	if (!*head)
		return(0);

	/* Store the current node in 'temp' */
	temp = *head;

	/* Get the data of the head node */
	n= temp->n;

	/* Move 'head' to the next node */
	*head = (*head)->next;

	/* Free the memory */
	free(temp);

	return (n);
}
