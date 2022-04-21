#include "main.h"

/**
 * _strlen - return the lenght of a string;
 */

int _strlen(char *s)
{
	int a;
	int b;
	char c;
	
	b = s[0];
	while ( c != '\0')
	{
		c++;
		a++;
		b = s[a];
		
	}
	return (c);
}
