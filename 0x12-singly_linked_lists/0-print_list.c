#include "lists.h"

/* Task 0. Print list */

/**
  * print_list - Prints all the elements of a 'list_t' list
  *
  * @h: List name
  *
  * Return: The number of nodes
  */

size_t print_list(const list_t *h)
{
	/* Loop counter variable declaration */
	int i = 0;

	while (h != 0)
	{
		/* Check the current node */
		if (h->str != 0)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");
		i++;
		h = h->next;
	}

	/* Return the number of counter node */
	return (i);
}
