#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet
 * ten times
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (c = 0; c <= 9; c++)
	{
		for (i = 'a'; i <= 'z'; i++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}

}
