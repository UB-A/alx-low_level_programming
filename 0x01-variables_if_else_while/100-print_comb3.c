#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int d;
	int j;

	for (d = 48; d < 57; d++)
	{
		for (j = d + 1; j <= 57; j++)
		{
			putchar(d);
			putchar(j);
			if (d != 56)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
