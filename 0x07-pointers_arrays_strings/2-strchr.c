#include "main.h"

/**
 * *_strchr - function locate charcter
 * @s: string
 * @c character
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\n'; i++)
	{
		if ( s[i - 1] == c)
		{
			for ( ; i < '\n'; i++)
			{
				s[i];
			}
			return (s);
			break;
		}
		else
		{
			return (0);
		}
	}
}
