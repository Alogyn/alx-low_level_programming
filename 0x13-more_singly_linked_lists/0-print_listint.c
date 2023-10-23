#include "lists.h"

/*
 * Task 0. Print list
 */

/**
  * print_listint - Prints all the elements of a 'listint_t' list
  *
  * @h: List name
  *
  * Return: The number of nodes
  */

size_t print_listint(const listint_t *h)
{
	/* Nodes counter variable declaration */
	size_t i;

	/* Print the elements and move to next node */
	for (i = 0; h; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}

	return (i);
}
