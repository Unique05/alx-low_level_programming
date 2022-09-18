#include "main.h"

/**
 * more_numbers - prints 0-14 10 times
 *
 * Return: 0
 */

void more_numbers(void)
{
	int i, c;

	for (i = 1; i <= 10; i++)
	{
		for (c = 0; c <= 14; c++)
		{
			if (c > 9)
			{
				_putchar((c / 10) + '0');
				_putchar((c % 10) + '0');
			}
			else
			{
				_putchar(c + '0');
			}
		}
	_putchar('\n');
	}
}
