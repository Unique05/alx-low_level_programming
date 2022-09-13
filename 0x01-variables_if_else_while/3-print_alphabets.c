#include <stdio.h>

/**
 * main - prints the alphabet
 * Description: Prints the alphabet
 * in lower case and then in lower case
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		putchar(c);
	for (c = 'A'; c <= 'Z'; c++)
		putchar(c);
	printf("\n");
	return (0);
}
