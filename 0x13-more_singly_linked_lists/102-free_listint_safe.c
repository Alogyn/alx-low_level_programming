#include "lists.h"

/*
 * Task (Advanced) 13. Free (safe version)
 */

listint_t **_ra(listint_t **list, size_t size, listint_t *new);

/**
  * free_listint_safe - Frees a 'listint_t' list
  *
  * @h: The pointer to the start of the list
  *
  * Return: The number of nodes in the list
  */

size_t free_listint_safe(listint_t **h)
{
	/* Pointers, counter and loop variables declarations */
	size_t i, num = 0;
	listint_t **list = NULL;
	listint_t *next;

	/* In case list is empty */
	if (h == NULL || *h == NULL)
		return (num);

	while (*h != NULL)
	{
		/* Check if the current exist in the list */
		for (i = 0; i < num; i++)
		{
			if (*h == list[i])
			{
				*h = NULL;
				free(list);
				return (num);
			}
		}

		num++;

		/* Reallocate memory */
		list = _ra(list, num, *h);

		/* Store the next node temporarily */
		next = (*h)->next;

		/* Free memory */
		free(*h);
		*h = next;
	}

	/* Free memory */
	free(list);
	return (num);
}

/**
  * _ra - Reallocates memory for an array of pointers to 'listint_t' nodes
  *
  * @list: The pointer to the old list of node pointers
  * @size: The size of the new list
  * @new: The pointer to the new node to be added to the list
  *
  * Return: The pointer to the new list of node pointers
  */

listint_t **_ra(listint_t **list, size_t size, listint_t *new)
{
	/* Pointer and loop variable declarations */
	listint_t **newlist;
	size_t i;

	/* Allocate memory */
	newlist = malloc(size * sizeof(listint_t *));

	if (newlist == NULL)
	{
		free(list);
		exit(98);
	}

	/* Copy pointers from the old list to the new list */
	for (i = 0; i < size - 1; i++)
		newlist[i] = list[i];

	/* Add the pointer to the new node to the new list */
	newlist[i] = new;

	/* Free memory */
	free(list);
	return (newlist);
}
