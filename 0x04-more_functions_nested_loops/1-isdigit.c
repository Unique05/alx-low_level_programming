#include "main.h"
#include <ctype.h>

/**
 * _isdigit - checks for a particular digit
 * @c: integer value
 * Return: 0
 */

int _isdigit(int c)
{

	if (isdigit(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

