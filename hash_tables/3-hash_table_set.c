#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>

/**
* hash_table_set - Adds or updates an element in the hash table.
* @ht: The hash table.
* @key: The key to add or update.
* @value: The value associated with the key.
*
* Return: 1 if it succeeded, 0 otherwise.
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
hash_node_t *new_node, *current;
unsigned long int index;

if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
return (0);

/* Calculate the index using key_index function */
index = key_index((const unsigned char *)key, ht->size);

/* Check if the key already exists, update the value */
current = ht->array[index];
while (current != NULL)
{
if (strcmp(current->key, key) == 0)
{
/* Duplicate the value and update it */
free(current->value);
current->value = strdup(value);
if (current->value == NULL)
return (0);
return (1);
}
current = current->next;
}

/* Create a new node and add it to the beginning of the list */
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
