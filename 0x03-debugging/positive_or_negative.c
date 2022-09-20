#include <stdlib.h>
#include <stdio.h>

/**
 * positive_or_negative - gives random numbers
 * @i: integer
 * Description: the function prints
 *" postive and negative numbers"
 * Return: 0
 */


void positive_or_negative(int i)
{
	if (i < 0)

	{
		printf("%d is negative\n", i);
	}
	else if (i > 0)

	{
		printf("%d is positive\n", i);
	}
	else

	{
	printf("%d is zero\n", i);
	}

}
