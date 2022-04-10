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
	char n;
	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'q' && n != 'e')
			putchar(n);
	};
	putchar('\n');
	return (0);

}
