#include "lists.h"

/*
 * Task 7. Get node at index
 */

/**
  * get_nodeint_at_index - Returns the nth node of a 'listint_t' linked list
  *
  * @head: Pointer to the head of the list
  * @index: Index of the node
  *
  * Return: The 'n' node of the list, NULL if not exist
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	/*Index count variable declaration */
	unsigned int count = 0;

	while (head != NULL)
	{
		/* Return the node at the specified index */
		if (count == index)
			return (head);
		head = head->next;
		count++;
	}
	return (NULL);
}
