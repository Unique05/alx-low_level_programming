#include "main.h"
#include <ctype.h>

/**
 * _isalpha - return 1 if character is
 * an alphabet and returns 0 otherwise
 * @c: char type
 * Return: 1 or 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
