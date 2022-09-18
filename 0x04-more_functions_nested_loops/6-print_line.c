#include "main.h"

/**
 * print_line - prints a line
 * @n: integer
 * Return: 0
 */

void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
