#include "main.h"

/**
 * _strpbrk - function that gets the length substring
 * @s: string
 * @accept: check byte
 * Return: n of byte;
 */

char *_strpbrk(char *s, char *accept)
{
	int i;
	int j;
	char p;

	for (i = 0; s[i] >= '\0'; i++)
	{
		for (j = 0; accept[j] > '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				p = &s[i];
				return (0);
			}
		}
	}
	return (0);
}
