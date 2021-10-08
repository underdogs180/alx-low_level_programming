#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table @size: size parameter
 * @size: size parameter
 * Return: Null if something goes wrong or hastable
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	int i;
	hash_table_t *hashtable;

	if (!size)
		return (NULL);

	/*allocate memory for hash table*/
        hashtable = malloc(sizeof(hash_table_t) * 1);

	if (!hashtable)
		return (NULL);

	/*allocate memory for table size */
	hashtable->array = malloc(sizeof(hash_node_t) * size);

	hashtable->size = size;

	for (i = 0; hashtable->array == NULL; i++)
        {
		free(hashtable);
		return (NULL);
	}

	return (hashtable);
}
