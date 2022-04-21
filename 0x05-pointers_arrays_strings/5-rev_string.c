#include "main.h"
/**
 * rev_string - write function in reverse
 * @*s: pointer variable to reverse
 * Return: Always return void
 */

void rev_string(char *s)
{
	int i;

	i = 0;
	while (s[i])
	{
		i++;
		while(i--)
		{
			_putchar(s[i]);
		}
	}
}
