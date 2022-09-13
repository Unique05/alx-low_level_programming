#include <stdio.h>

/**
 * main - prints the alphabet
 * Description: This programme prints
 * the alphabet in lower case
 * Return: 0
 */

int main(void)
{
	char ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++);
	putchar(ch);
	putchar ('\n');
	return (0);
}
