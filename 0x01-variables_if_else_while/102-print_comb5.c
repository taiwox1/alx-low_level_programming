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
	int q;


	for (q = '0'; q <= '9'; q++)
	{
        for (n = '0'; n <= '9'; n++)
        {
                for (m = '0' ; m <= '9'; m++)
                {
                        for (y = (m + 1) ; y <= '9'; y++)
                        {
				putchar(q);
                                putchar(n);
				putchar(' ');
                                putchar(m);
                                putchar(y);
                                if (q!= '8' || n != '8')
                                {
                                        putchar(',');
                                        putchar(' ');
                                }
                        }
                };
        }
	}
        putchar('\n');
        return (0);
} 
