#include "main.h"
/**
 * _islower - functions checkes for lowercase chareacter
 *
 * Return: Always retune 0 or 1.
 * */
int _islower(int c)
{
	int value = c;

	if ((value >= 'a' || value <= 'z') || (value >= 97 || value <=112 ))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
