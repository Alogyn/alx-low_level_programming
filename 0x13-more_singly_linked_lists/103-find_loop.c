#include "lists.h"

/*
 * Task (Advanced) 14. Find the loop
 */

/**
  * find_listint_loop - Finds the loop in a linked list
  *
  * @head: The pointer to the head of the linked list
  *
  * Return: The address of the node where the loop starts, or NULL if no loop
  */

listint_t *find_listint_loop(listint_t *head)
{
	/* Pointers declarations */
	listint_t *slow, *fast;

	if (head == NULL || head->next == NULL)
		return (NULL);

	/* Initialize 'slow' and 'fast' pointers */
	slow = head->next;
	fast = head->next->next;

	while (fast && fast->next)
	{
		if (slow == fast)
		{
			/* Reset slow pointer to the head */
			slow = head;
			while (slow != fast)
			{
				/* Move 'slow' and 'fast' pointers one node */
				slow = slow->next;
				fast = fast->next;
			}
			return (slow);
		}
		/* Move slow pointer one node at a time */
		slow = slow->next;

		/* Move fast pointer two nodes at a time */
		fast = fast->next->next;
	}

	return (NULL);
}
