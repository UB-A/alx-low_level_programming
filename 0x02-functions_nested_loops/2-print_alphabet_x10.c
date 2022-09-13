#include "main.h"

/**
*print_alphabet_x10 - a function that prints 10 times the alphabet
*
* Description: 'prining 10 times'
*
*Return: Always void
*/

void print_alphabet_x10(void)
{
	int n, co;

	co = 1;

	while (co <= 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		co++;
		_putchar('\n');
	}
}
