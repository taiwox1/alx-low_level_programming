#include "main.h"
#include <stdio.h>
/**
 * jack_bauer - function print every minute of Jack Bauer life
 *
 * Return: Alway void
 */
void jack_bauer(void)
{
	int hrs;
	int mnt;
	for (hrs = 0; hrs < 24; hrs++)
	{
		for (mnt = 0; mnt < 60; mnt++)
		{
			_putchar((hrs / 10) + '0');
			_putchar((hrs % 10) + '0');
			_putchar(':');
			_putchar((mnt / 10) + '0');
			_putchar((mnt % 10) + '0');
			_putchar('\n');
		}
	}
}
