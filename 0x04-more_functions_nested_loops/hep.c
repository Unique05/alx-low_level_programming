#include <stdio.h>

int main(void)
{
	int a, b;

	for ( b = 0; b <= 5; b++)
	{	for (a = 0; a < b; a++)
		{
			putchar('a');
		}
		putchar('b');
		putchar('\n');
	}
}
