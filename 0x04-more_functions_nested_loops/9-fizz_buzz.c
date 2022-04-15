#include <stdio.h>
/**
 * main - check the code for 
 *
 * Return: void.
 */

int main(void)
{

	int m;

	for (m = 1; i <= 100; m++)
	{
		if (m % 3 == 0 && m % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (m % 3 == 0)
		{
			printf("Fizz");
		}
		else if (m % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%i", m);
		}

		if (m != 100)
		{
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);

}
