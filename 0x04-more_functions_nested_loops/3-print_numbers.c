#include "main.h"
#include <stdio.h>

/**
 * printnumbers - prints numbers from 0 - 9
 *
 * Return: 0
 */

void print_numbers(void)
{
	int c;

	for (c = 0; c <= 9; c++)
	{
		printf("%d", c);
	}
	printf("\n"); 
}
