#include "lists.h"

/*
 * Task (Advanced) 12. Print (safe version)
 */

const listint_t **_r(const listint_t **list, size_t size,
		const listint_t *new);

/**
  * print_listint_safe - Prints a 'listint_t' linked list
  *
  * @head: Pointer to the head of the list
  *
  * Return: The number of nodes
  */

size_t print_listint_safe(const listint_t *head)
{
	/* Counter and loop variables declarations */
	size_t i, count = 0;
	const listint_t **list = NULL;

	/* Traverse the linked list */
	while (head != NULL)
	{
		/* Check if the current node is in the list */
		for (i = 0; i < count; i++)
		{
			if (head == list[i])
			{
				/* Print the node with an arrow indicating */
				printf("-> [%p] %d\n", (void *)head, head->n);
				free(list);
				return (count);
			}
		}

		count++;

		/* Update the list */
		list = _r(list, count, head);

		/* Print the current node and move to the next one */
		printf("[%p] %d\n", (void *)head, head->n);
		head = head->next;
	}
	/* Free the list */
	free(list);
	return (count);
}

/**
  * _r - Reallocates memory for an array of pointers
  * to the nodes in a linked list
  *
  * @list: The old lis append
  * @size: The size of new list
  * @new: The new node
  *
  * Return: The pointer to the new list
  */

const listint_t **_r(const listint_t **list, size_t size, const listint_t *new)
{
	/* Pointer and loop variable declarations */
	const listint_t **newlist;
	size_t i;

	/* Allocate memory */
	newlist = malloc(size * sizeof(listint_t *));

	/* In case allocation fail */
	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	/* Copy the old list to the new list */
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];

	/* Add the new node to the new list */
	newlist[i] = new;

	/* Free the memory */
	free(list);

	return (newlist);
}
