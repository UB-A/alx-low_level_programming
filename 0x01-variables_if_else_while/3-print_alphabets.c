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
	char r = "ABCDEFGHIJKLMNOPQRSTUVWXYZ"[random() % 26];

	char o = tolower(r);

	putchar(o);
	/* your code goes there */
	return (0);
}
