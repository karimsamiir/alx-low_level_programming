#include "main.h"

/**
 * _isalpha - A  function that checks for
 *		alphabetic character
 *
 * @c: takes input from other functions
 *
 * Return: 1 if c is true
 *		else return 0 (success)
*/

int _isalpha(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	if (c >= 65 && c <= 90)
		return (1);
	return (0);
}
