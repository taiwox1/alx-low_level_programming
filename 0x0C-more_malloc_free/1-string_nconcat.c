#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - function concatenate two string
 * @s1: first string
 * @s2: second string
 * @n: int
 * Return: return pointer, if fail return Null
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i1;
	int i2;
	int x1;
	int x2;
	char *p;

	if (s1 == 0)
		return (NULL);
	if (s2 == 0)
		return (NULL);
	i1 = 0;
	while (s1[i1] != '\0')
		i1++;
	i2 = 0;
	while (s2[i2] != '\0')
		i2++;
	p = malloc((i1 + n + 1) * sizeof(char));
	if (p == NULL)
		return (0);
	x1 = 0;
	while (x1 < i1)
	{
		p[x1] = s1[x1];
		x1++;
	}
	x2 = i1;
	while (x2 < (i1 + n))
	{
		p[x2] = s2[x2 - i1];
		x2++;
	}
	p[x2] = '\0';
	return (p);
}
