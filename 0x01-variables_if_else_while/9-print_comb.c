#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	int m = 0;
	
	while (m < 10)
	{
		putchar(48 + m);
		if (m != 9)
		{
			putchar(',');
			putchar(' ');
		}
		m++;
	}
	putchar('\n');
	return (0);
}
