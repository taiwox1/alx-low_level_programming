#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * rot13 - encoding string
 * @str: string to encode
 * Return: void
 */
char *rot13(char *str)
{
        int i, h;

	char cas0[] = "abcdefghijklmnopqrstuvwsyz";
	char cas1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char cas2[] = "nopqrstuvwxyzabcdefghijklm";
	char cas3[] = "NOPQRSTUVWXYZABCDEFGHIJKLM";
	i = 0;
	h = 0;

        for (i; str[i] != '\0'; i++)
        {
                for (h = 0; h != '\0'; h++)
                {
                        if (str[i] == cas0[h])
                        {
                                str[i] = cas2[h];
                                break;
                        }

			if (str[i] == cas1[h])
                        {
                                str[i] = cas3[h];
                                break;
                        }
                }
        }

        return (str);
}
