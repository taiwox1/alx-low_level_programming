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
                putchar(n);

	for (n = 'A'; n <= 'Z'; n++)
		putchar(n);

	putchar('\n');

        return (0);
}
~    
