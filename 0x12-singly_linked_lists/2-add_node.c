#include "lists.h"

/* 2. Add node */

/**
  * add_node - Adds a new node at the beginning of a 'list_t' list
  *
  * @head: Pointer to the pointer of the head node
  * @str: String to be added to the new node (char)
  *
  * Return: Pointer to the newly created node, or NULL if allocation fails
  */

list_t *add_node(list_t **head, const char *str)
{
	/* Pointer variable store declarations */
	list_t *new;
	size_t char_num;

	/* Alocate memory */
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	/* Input duplication */
	new->str = strdup(str);
	for (nchar = 0; str[nchar]; nchar++)
		;
	/* Set the length and next pointer of the new node */
	new->len = nchar;
	new->next = *head;
	*head = new;

	return (*head);
}
