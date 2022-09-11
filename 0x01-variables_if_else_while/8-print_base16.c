#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i;
	char l;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (l = 'a'; l <= 'f' ; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
