#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - gives random numbers
 * @n: integer
 * Description: the function prints
 *" postive and negative numbers"
 * Return: 0
 */


void positive_or_negative(int n)
{
	if (n < 0)

	{
		printf("%d is negative\n", n);
	}
	else if (n > 0)

	{
		printf("%d is positive\n", n);
	}
	else

	{
	printf("%d is zero\n", n);
	}

}
