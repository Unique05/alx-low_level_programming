#include <stdio.h>

/**
 * main - prints digits
 * Description: function prints sing digits
 * in base ten on a new line
 * Return: 0
 */

int main(void)
{
int c;
	for (c = 0; c < 10; c++)
		putchar(c + '0');
	putchar('\n');
	return (0);
}
