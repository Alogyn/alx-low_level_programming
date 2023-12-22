#include "hash_tables.h"

/* Task (Advanced) 7. $ht['Betty'] = 'Cool' */

/**
  * shash_table_create - Creates a sorted hash table
  *
  * @size: The size of the array
  *
  * Return: A pointer to the newly created sorted hash table
  */

shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *ht;
	unsigned long int i;

	ht = malloc(sizeof(shash_table_t));
	if (ht == NULL)
		return (NULL);

	ht->size = size;
	ht->array = malloc(sizeof(shash_node_t *) * size);
	if (ht->array == NULL)
	{
		free(ht);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		ht->array[i] = NULL;

	ht->shead = NULL;
	ht->stail = NULL;

	return (ht);
}

/**
  * shash_table_set - Adds an element to the sorted hash table
  *
  * @ht: The sorted hash table
  * @key: The key
  * @value: The value associated with the key
  *
  * Return: 1 if it succeeded, 0 otherwise
  */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *prev, *current;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	prev = NULL;
	current = ht->shead;

	while (current && strcmp(key, current->key) > 0)
	{
		prev = current;
		current = current->snext;
	}

	if (current && strcmp(key, current->key) == 0)
	{
		free(current->value);
		current->value = strdup(value);
		return (1);
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	new_node->value = strdup(value);
	if (new_node->key == NULL || new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node->value);
		free(new_node);
		return (0);
	}

	new_node->next = NULL;
	new_node->sprev = prev;
	new_node->snext = current;

	if (prev)
		prev->snext = new_node;
	else
		ht->shead = new_node;

	if (current)
		current->sprev = new_node;
	else
		ht->stail = new_node;

	return (1);
}

/**
  * shash_table_get - Retrieves a value associated with
  * a key in the sorted hash table
  *
  * @ht: The sorted hash table
  * @key: The key to search for
  *
  * Return: The value associated with the key, or NULL if key couldn't be found
  */

char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	node = ht->shead;

	while (node && strcmp(key, node->key) > 0)
		node = node->snext;

	if (node && strcmp(key, node->key) == 0)
		return (node->value);

	return (NULL);
}

/**
  * shash_table_print - Prints the sorted hash table using
  * the sorted linked list
  *
  * @ht: The sorted hash table
  *
  * Return: None
  */

void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->shead; node; node = node->snext)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->snext)
			printf(", ");
	}
	printf("}\n");
}

/**
  * shash_table_print_rev - Prints the hash table in reverse order
  * using the sorted linked list
  *
  * @ht: The sorted hash table
  *
  * Return: None
  */

void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *node;

	if (ht == NULL)
		return;

	printf("{");
	for (node = ht->stail; node; node = node->sprev)
	{
		printf("'%s': '%s'", node->key, node->value);
		if (node->sprev)
			printf(", ");
	}
	printf("}\n");
}

/**
  * shash_table_delete - Deletes a sorted hash table
  *
  * @ht: The sorted hash table
  *
  * Return: None
  */

void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *node, *temp;

	if (ht == NULL)
		return;

	for (node = ht->shead; node; node = temp)
	{
		temp = node->snext;
		free(node->key);
		free(node->value);
		free(node);
	}

	free(ht->array);
	free(ht);
}
