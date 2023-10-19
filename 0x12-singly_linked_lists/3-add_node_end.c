#include "lists.h"

/* Task 3. Add node at the end */

/**
  * add_node_end - Adds a new node at the end of a 'list_t' list
  *
  * @head: Pointer to the pointer of the head node
  * @str: String to be added to the new node (char)
  *
  * Return: Pointer to the newly created node, or NULL if allocation fails
  */
list_t *add_node_end(list_t **head, const char *str)
{
	/* Pointer variable store declarations */
	list_t *new, *temp;
	size_t i = 0;

	/* Allocate memory */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* Input duplication */
	new->str = strdup(str);
	while (str[i] != 0)
		i++;

	/* Set the length and next pointer of the new node */
	new->len = nchar;
	new->next = NULL;
	temp = *head;

	/* In case the list is empty */
	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}

	return (*head);
}
