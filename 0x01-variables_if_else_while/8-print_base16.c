#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 * main - print alphabet in lower case and upper case
 *
 * Return: Always 0.
 */
int main(void)
{
	int n, m;
	for (n = 0; n < 10; n++)
	{
		putchar(n);
	}
	for (m = 'a'; m <= 'f'; m++)
	{
		putchar(m);
	}
	putchar('\n');
	return (0);

}
