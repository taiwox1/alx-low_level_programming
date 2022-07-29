#include "hash_tables.h"

/**
 * key_index - function giv the index of a key
 * @key: key of the value to store at index
 * @size: size is the size of the array of the hash table
 * Return: return index
 *
 */

unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
