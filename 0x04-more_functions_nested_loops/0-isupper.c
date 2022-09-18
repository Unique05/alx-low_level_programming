#include "main.h"
#include <ctype.h>

/**
 * _isupper - checks for uppercase characters
 * @c: is an integer value
 * Return: 0
 */

int _isupper(int c)
{
	if (isupper(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
