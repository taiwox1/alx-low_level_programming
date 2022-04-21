#include "main.h"
/**
 * _puts - print a string followed by newline
 * @str: parameter
 * Return: Always void
 */

void _puts(char *str)
{
 	int i;
        char c;

        i = 0;
        while(str[i])
        {
                i++;
                c = str[i];
                putchar(c);
        }
        putchar('\n');
}
