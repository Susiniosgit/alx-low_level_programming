#include "hash_tables.h"

/**
 *  hash_table_print - print hash table.
 * @ht: pointer to hash table to print
 * Return: void.
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned int i = 0, first = 0;
	unsigned int size;
	hash_node_t *temp;

	if (!ht)
	{
		return;
	}
	printf("{");
	size = ht->size;
	for (i = 0; i < size; i++)
	{
		if (ht->array[i])
		{
			temp = ht->array[i];
			while (temp)
			{
				if (!first)
				{
					printf("\'%s\': \'%s\'", temp->key, temp->value);
					first = 1;
				}
				else
					printf(", \'%s\': \'%s\'", temp->key, temp->value);
				temp = temp->next;
			}
		}
	}
	printf("}\n");
}
