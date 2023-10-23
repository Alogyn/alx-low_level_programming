#include "lists.h"

/*
 * Task 3. Add node at the end
 */

/**
  * add_nodeint_end - Adds a new node at the end of a 'listint_t' list
  *
  * @head: Pointer to the pointer to the head node
  * @n: Integer value to be stored in the new node (int)
  *
  * Return: The address of new element, '0' if fail
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	/* New node pointer and temporary pointer declaration */
	listint_t *new_node, *temp;

	/* Allocate memory */
	new_node = malloc(sizeof(listint_t));

	/* In case allocated memory fail */
	if (!new_node)
		return (0);

	/* Set the value of new node */
	new_node->n = n;

	/* Set the last node to the value NULL */
	new_node->next = NULL;

	/* In case the list 'head' is empty */
	if (!*head)
		*head = new_node;

	else
	{
		temp = *head;
		/* Loop activ untill we reach the last node */
		while (!temp->next)
			temp = temp->next;
		/* Set the last node to the new_node */
		temp->next = new_node;
	}

	return (new_node);
}
