#include "main.h"

/**
 * *_strchr - function locate charcter
 * @s: string
 * @c character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}
	return (0);
}
