#include"main.h"

/**
 * _isdigit - A function that checks for a digit (0 through 9)
 *
 * @c: input
 *
 * Return: 1 if it is digit, 0 if it is not
*/

int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
		return (1);
	else
		return (0);
}
