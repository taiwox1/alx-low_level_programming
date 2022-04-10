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
	int x;
	int y;

        for (n = '0'; n <= '9'; n++)
        {
                for (m = '0' ; m <= '9'; m++)
                {

			for (x = '0'; x <= '9'; x++){

				for (y = '0'; y <= '9'; y++)
				{
					putchar(n);
					putchar(m);
					putchar(' ');
					putchar(x);
                                        putchar(y);

				}
				if ((n != '9' || m != '9') && (n != '9' || m != '9'))
                        {
                                putchar(',');
                                putchar(' ');
                        }


			}
                };
        };
        putchar('\n');
        return (0);
}

