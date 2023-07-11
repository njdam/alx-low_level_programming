#include "hash_tables.h"

/**
 * key_index - a function to store key/value in hash tables array;
 * @key: is a key to be hash;
 * @size: is a size of hash table array;
 *
 * Return: index where key/value is stored in hash tables array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
