#include "lists.h"

/*
 * Task 8. Sum list
 */

/**
  * sum_listint - Returns the sum of all the data (n)
  * of a 'listint_t' linked list
  *
  * @head: Pointer to the head of the list
  *
  * Return: The sum of all the data values in the linked list, NULL is is empty
  */

int sum_listint(listint_t *head)
{
	/* Variable declaration */
	int sum = 0;

	while (head)
	{
		/* Add the current node's data to the sum */
		sum += head->n;

		/* Move to the next node */
		head = head->next;
	}

	return (sum);
}
