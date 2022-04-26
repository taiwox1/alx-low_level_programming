#include "main.h"

/**
 * dest - destional
 * @src: source
 * @n: size
 * Return: always dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		*(dest + i) = src[i];
	}
	return (dest);
}
