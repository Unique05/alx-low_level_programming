#include <stdio.h>

/**
 * main - prints digits
 * Description: function primts digits
 * in hexadecimal
 * Return: 0
 */

int main(void)
{
	int a;
	char b;

	for (a = 0; a <= 9; a++)
		putchar((a % 10) + '0');
	for (b = 'a'; b <= 'f'; b++)
		putchar(b);
	putchar('\n');
	return (0);
}
