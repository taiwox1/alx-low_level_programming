#include "main.h"
/**
 * *_strncat - this function concatenate two string together
 * @*dest: first pointer added to and finally return
 * @*src: second pointer holding string to be add.
 * @n: byte size
 * Return: void
 */

char *_strcat(char *dest, char *src)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	dest[dest_len + i] = '\0';
	return (dest);
}
