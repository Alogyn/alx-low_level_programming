#include "lists.h"

/* Task 4. Free list */

/**
  * free_list - Frees a 'list_t' list
  *
  * @head: Pointer to the head node of the list
  *
  * Return: None
  */

void free_list(list_t *head)
{
	/* Pointer declaration */
	list_t *current;

	/* Iterate through the list and free memory for each node */
	while ((current = head) != NULL)
	{
		head = head->next;
		free(current->str);
		free(current);
	}
}
