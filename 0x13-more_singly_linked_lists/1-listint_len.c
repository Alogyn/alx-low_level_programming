#include "lists.h"

/*
 * Task 1. List length
 */

/**
  * listint_len - Returns the number of elements in a linked 'listint_t' list
  *
  * @h: List name
  *
  * Return: The number of node
  */

size_t listint_len(const listint_t *h)
{
	/* Nodes counter variable declaration */
	size_t i;

	/* Counting the nodes and moving to the next */
	for (i = 0; h; i++)
	{
		h = h->next;
	}

	return (i);
}
