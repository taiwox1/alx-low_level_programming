#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *_strdup - Return a newly allocated memorey contain a copy of a string
 * @str - string to be copied
 * Return: Null of copied pointer
 */

char *_strdup(char *str)
{
	char *m;

	m = malloc(sizeof(char));

	if (str == NULL)
	{
		return (NULL);
	}
	return(m = str);
}
