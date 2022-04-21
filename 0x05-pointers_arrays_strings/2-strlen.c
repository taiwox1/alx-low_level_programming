#include "main.h"

/**
 * _strlen - return the lenght of a string;
 */

int _strlen(char *s)
{
	int nxt_chtr;
	int count;
	char chtr;
	
	chtr = s[0];
	while ( chtr != '\0')
	{
		count++;
		nxt_chtr++;
		chtr = s[nxt_chtr];
		
	}
}
