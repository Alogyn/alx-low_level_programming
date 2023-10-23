#include "lists.h"

/*
 * Task 2. Add node
 */

/**
  * add_nodeint - Adds a new node at the beginning of a 'listint_t' list
  *
  * @head: Pointer to the pointer to the head node
  * @n: Integer value to be stored in the new node (int)
  *
  * Return: The address of new node, '0' if fail
  */

listint_t *add_nodeint(listint_t **head, const int n)
{
	/* New node pointer declaration */
	listint_t *new_node;

	/* Allocate memory */
	new_node = malloc(sizeof(listint_t));

	/* In case allocated memory fail */
	if (!new_node)
		return (0);

	/* Set the value of new node */
	new_node->n = n;

	/* Make the new node to current head */
	new_node->next = *head;

	/* *head update */
	*head = new_node;

	return (new_node);
}
