#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/*
 * create_array - function  creates an array of chars
 * @size: size of array
 * @c: character
 * Return: pointer to array or none
 */

char *create_array(unsigned int size, char c)
{
	char *s;

	s = (char *)malloc(sizeof(c) * size);
	if (s == 0 || size == 0)
	{
		return (NULL);
	}
	while (size--)
		s[size] = c;
	return (s);

}
