#include <stdlib.h>
#include <stdio.h>
#include <time.h>

/**
 * this code will genarate a roundom number
 * and assign it to n
 * therefore, if n is greater than %5 output is last digit ... id .. and grater than 5
 * therefore, if n is lesser than %5 output is last digit ... id ..and less than 5
 * if zero output is last digit --- is --- and it is zero
 */

int main(void)
{
	int n;
	int last;
	
	srand(time(0));	
	n = rand() - RAND_MAX / 2;
	last = n % 10;

	if (last > 5)
		printf("Last digit of %i is %i and is greater than 5\n", n, last);

	else if (last == 0)
		printf("Last digit of %i is %i and is 0\n", n,last);
	else if (last < 6)
		printf("Last digit of %i is %i and is less than 6 and not 0\n", n, last);
	
	return (0);
}
