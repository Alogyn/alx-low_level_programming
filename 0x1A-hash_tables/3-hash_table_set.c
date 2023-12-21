#include "hash_tables.h"

/* Task 3. >>> ht['betty'] = 'cool' */

/**
  * hash_table_set - Adds an element to the hash table
  *
  * @ht: The hash table
  * @key: The key (cannot be an empty string)
  * @value: The value associated with the key (duplicated)
  *
  * Return: 1 if successful, 0 otherwise
  */

int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *new_node, *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (0);

	index = key_index((unsigned char *)key, ht->size);

	/* Check if the key already exists, update its value if it does */
	temp = ht->array[index];
	while (temp)
    {
		if (strcmp(temp->key, key) == 0)
        {
			free(temp->value);
			temp->value = strdup(value);
			if (temp->value == NULL)
				return (0);
			return (1);
		}
		temp = temp->next;
	}

	/* Key doesn't exist, create a new node and insert at the beginning of the list */
	new_node = malloc(sizeof(hash_node_t));
	if (new_node == NULL)
		return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
		free(new_node);
		return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
		free(new_node->key);
		free(new_node);
		return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	return (1);
}
