#include "main.h"
/**
 * _strcmp - compares two strtings
 * @s1: first string
 * @s2: second string
 * Return: 0 or s1[i] - s2[i]
 */

int _strcmp(char *s1, char *s2)
{
	int i;

	/**
	 * * We have reached the end of S1 OR we have reached the end of S2
	 */

	for (i = 0; s1[i] != '\0' || s2[1] != '\0'; i++)
	{
		if (s1[i] != s2[i])
		{
			return (s1[i] - s2[i]);
		}
	}
	return (0);
}
