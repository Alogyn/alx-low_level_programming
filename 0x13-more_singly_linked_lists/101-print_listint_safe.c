#include "lists.h"

/*
 * Task (Advanced) 12. Print (safe version)
 */

/**
  * print_listint_safe - Prints a 'listint_t' linked list
  *
  * @head: Pointer to the head of the list
  *
  * Return: The number of nodes
  */

size_t print_listint_safe(const listint_t *head)
{
	/* Pointers, counter and llop variables declarations */
	const listint_t *slow, *fast, *loop_node = NULL;
	size_t count = 0;
	int loop = 0;

	/* Initialize slow and fast pointers */
	slow = head;
	fast = head;
	/* Detect a loop in the linked list */
	while (slow && fast && fast->next)
	{
		slow = slow->next;
		fast = fast->next->next;
		/* Set loop flag to true and identify the loop node */
		if (slow == fast)
		{
			loop = 1;
			loop_node = slow;
			break;
		}
	}
	/* Print the loop node if there is a loop */
	if (loop)
		printf("Loop starts at: [%p] %d\n", (void *)loop_node, loop_node->n);
	/* Reset the slow pointer */
	slow = head;
	while (slow)
	{
		/* Print the current node's address and value */
		printf("[%p] %d\n", (void *)slow, slow->n);
		count++;
		/* Print the loop node and exit the loop */
		if (loop && slow == loop_node)
		{
			printf("-> [%p] %d\n", (void *)slow, slow->n);
			break;
		}
		/* Move the slow pointer to the next node */
		slow = slow->next;
	}
	return (count);
}
