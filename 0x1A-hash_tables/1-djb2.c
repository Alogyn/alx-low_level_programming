#include "hash_tables.h"

/* Task 1. djb2 */

/**
  * hash_table_create - Creates a hash table
  *
  * @size: The size of the array
  *
  * Return: A pointer to the newly created hash table,
  * or NULL if something went wrong
  */

unsigned long int hash_djb2(const unsigned char *str)
{
    unsigned long int hash;
    int c;

    hash = 5381;
    while ((c = *str++))
    {
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
    }
    return (hash);
}
