#include "main.h"
#include <ctype.h>

/**
 * _islower - returns 1 if c is lowercase
 * and 0 if otherwise
 * @c: char type letter
 * Return: 1 or 0
 */

int _islower(int c)
{
	if (c > 96 && c < 123)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
