#include "main.h"

/**
*_isupper - checks uppercase
*@c: the parameter
*Return: retuen 1 if c is uppercase, 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
