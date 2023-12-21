#include "hash_tables.h"

/* Task 4. >>> ht['betty'] */

/**
  * hash_table_get - Retrieves a value associated with a key
  *
  * @ht: The hash table to look into
  * @key: The key to search for
  *
  * Return: The value associated with the element,
  * or NULL if key couldn't be found
  */

char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *temp;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	/* Traverse the linked list at the calculated index to find the key */
	temp = ht->array[index];
	while (temp)
	{
		if (strcmp(temp->key, key) == 0)
			return (temp->value);
		temp = temp->next;
	}

	/* Key not found */
	return (NULL);
}
