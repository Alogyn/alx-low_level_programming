#include "lists.h"

/* Task 1. List length */

/**
  * dlistint_len - returns the number of elements in a linked dlistint_t list
  *
  * @h: pointer to the head of the list
  *
  * Return: The number of elements
  */

size_t dlistint_len(const dlistint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}

	return (count);
}

