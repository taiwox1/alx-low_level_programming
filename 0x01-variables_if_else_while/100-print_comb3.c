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
		for (m = '0'; m <= '9'; m++)
		{
			b = m + n;
			if (b <= '9')
			{
				putchar(n);
				putchar(b);
			}
			putchar(',');
			putchar(' ');

		};



	}
	putchar('\n');
	return (0);
}
