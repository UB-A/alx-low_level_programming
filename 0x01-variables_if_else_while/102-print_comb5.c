#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
*main - Entry point
*Return: Always 0 (Success)
*/
int main(void)
{
	int d, i, j, z;

	for (d = 48; d <= 57; d++)
	{
		for (j = 48; j < 57; j++)
		{
			for (i = 48; i <= 57; i++)
			{
				z = 48;
				while (z <= 57)
				{
					if (d == i && j == z)
					{
						z++;
					}
					putchar(d);
					putchar(j);
					putchar(' ');
					putchar(i);
					putchar(z);
					if (!(d == 57 && j == 56))
					{
						putchar(',');
						putchar(' ');
					}
					z++;
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
