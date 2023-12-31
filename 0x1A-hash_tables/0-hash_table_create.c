#include "hash_tables.h"

/* Task 0. >>> ht = {} */

/**
  * hash_table_create - Creates a hash table
  *
  * @size: The size of the array
  *
  * Return: A pointer to the newly created hash table,
  * or NULL if something went wrong.
  */

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;
	hash_node_t **array;
	unsigned long int i;

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	array = malloc(sizeof(hash_node_t *) * size);
	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = NULL;

	table->array = array;
	table->size = size;

	return (table);
}
