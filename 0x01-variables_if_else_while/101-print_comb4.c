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
	int y;
	for (n = '0'; n <= '9'; n++)
	{
		for (m = (n + 1) ; m <= '9'; m++)
		{
			for (y = (m + 1) ; y <= '9'; y++)
			{
				putchar(n);
				putchar(m);
				putchar(y);
				if (m != '8' || n != '7' || y != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		};
	}
	putchar('\n');
	return (0);
}
