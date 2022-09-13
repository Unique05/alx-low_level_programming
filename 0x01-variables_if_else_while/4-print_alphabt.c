#include <stdio.h>

/**
 * main - prints alphabet
 * Description: prints all the alphabet
 * except q and e
 * Return: 0
 */

int main(void)
{
	char c;

	for (c = 'a'; c <= 'z'; c++)
		if (c != 'q' && c != 'e')
		putchar(c);
	printf("\n");
	return (0);
}
