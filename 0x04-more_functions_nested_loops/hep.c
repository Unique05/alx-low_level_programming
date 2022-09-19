#include <stdio.h>

int main(void)
{
	int a;

	for (a = 0; a <= 30; a++)
	{
		if (( a % 3 && a % 7) == 0)
		{
			printf("ccrree");
		}
		else 
		{
			printf("%d", a);
		}
	}
}
