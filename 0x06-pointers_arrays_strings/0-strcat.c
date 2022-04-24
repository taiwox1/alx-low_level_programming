#include "main.h"
/**
 * *_strncat - this function concatenate two string together
 * @*dest: first pointer added to and finally return
 * @*src: second pointer holding string to be add.
 * Return: void
 */

char *_strncat(char *dest, char *src, int n)
{
	int dest_len;
	int i;

	for (dest_len = 0; dest[dest_len] != '\0'; dest_len++)
		;
	for (i = 0; src[i] != '\0'; i++)
	{
		dest[dest_len + i] = src[i];
	}
	return (dest);
}
