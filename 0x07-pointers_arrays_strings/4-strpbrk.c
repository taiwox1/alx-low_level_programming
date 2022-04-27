#include "main.h"

/**
 * _strbrk - function that gets the length substring
 * @s: string
 * @accept: check byte
 * Return: n of byte;
 */

unsigned int _strbrk(char *s, char *accept)
{
	int i;
	int j;

	for (i = 0; s[i] >= '\0'; i++)
	{
		if (s[i] == accept[j])
		{
			return (s[i]);
		}
	}
	return ('\0');
}
