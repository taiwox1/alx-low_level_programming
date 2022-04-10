#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
int main(void)
{
	int n;
	int m;
	
	for (n = 0; n <= 9; n++)
	{
		for (m = 0; m <= 8; m++)
		{
			putchar(n);
			putchar(m);
			putchar(',');
			putchar(' ');

		};



	}
	return (0);
}
