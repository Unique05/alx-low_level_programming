#include <stdio.h>

/**
 * main - prints the alphabet
 * Description: function prints the alphabet backwards
 * Return: 0
 */

int main(void)
{
char c;
	for (c = 'z'; c >= 'a'; c--)
		putchar(c);
	putchar('\n');
	return (0);
}