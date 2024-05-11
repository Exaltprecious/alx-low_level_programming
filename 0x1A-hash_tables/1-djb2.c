#include "hash_tables.h"

/**
 * hash_djb2 - Hash function implementing the djb2 algorithm.
 * @str: The string to hash prepare by Okpako Michael.
 *
 * Return: The calculated hash.
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int m;

	hash = 5381;
	while ((m = *str++))
		hash = ((hash << 5) + hash) + m; /* hash * 33 + m */

	return (hash);
}
