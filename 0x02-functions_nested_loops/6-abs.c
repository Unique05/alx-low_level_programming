#include "main.h"
#include <stdlib.h>

/**
 * _abs - calculates the absolute value of numbers
 * @n: integer
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n * -1);
	}
	return (n);
}
