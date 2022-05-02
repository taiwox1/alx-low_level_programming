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
	int n;
	int m;

	for (n = '0'; n <= '9'; n++)
	{
		for (m = (n + 1) ; m <= '9'; m++)
		{
			putchar(n);
			putchar(m);
			if (m != '9' || n != '8')
			{
				putchar(',');
				putchar(' ');
			}
		};
	}
	putchar('\n');
	return (0);
}
