#include "main.h"
/**
 * leet - encoding string
 * @str: string to encode
 * Return: void
 */
char *leet(char *str)
{
	int i;
	int h;
	char cas[] = "aeotlAEOTL";


	for (i = 0; str[i] != '\0'; i++)
	{
		for (h = 0; cas[h] != '\n'; h++)
		{
			if (str[i] == 'a' || str[i] == 'A')
			{
				str[i - 1] = '4';
				break;
			}
			else  if (str[i] == 'e' || str[i] == 'e')
			{
				str[i - 1] = '3';
				break;
			}
			else  if (str[i] == 'o' || str[i] == 'O')
			{
				str[i - 1] = '0';
				break;
			}
			else  if (str[i] == 't' || str[i] == 'T')
			{
				str[i - 1] = '7';
				break;
			}
			else if (str[i] == 'l' || str[i] == 'L')
			{
				str[i - 1] = '1';
				break;
			}
		}
	}
	return (str);
}
