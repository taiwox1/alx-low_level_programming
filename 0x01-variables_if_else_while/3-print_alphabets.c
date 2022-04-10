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
	char m;

        for (n = 'a'; n <= 'z'; n++)
                putchar(n);

	for (m = 'A'; m <= 'z'; m++)
		putchar(n);
	putchar('\n');
        return (0);
}
~    
