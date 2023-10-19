#include "lists.h"

/**
  * list_len - Returns the number of elements in a linked list_t list
  *
  * @h: List name
  *
  * Return: The number of node
  */

size_t list_len(const list_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
		h = h->next;
		i++;
	}
	return (i);
}
