#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;
	int b;
	
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
