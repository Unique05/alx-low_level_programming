#include <stdio.h>

int main(void)
{
	int a, b;

	for (a = 0; a <= 3; a++)
	{
		for (b = 0; b <= 3; b++)
		{
			putchar('#');
		}

		putchar('\n');
	}
}
