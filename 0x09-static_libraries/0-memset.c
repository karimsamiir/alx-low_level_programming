#include "main.h"

/**
 * *_memset - A  function that fills memory with a constant byte
 * @s: pointer to put the constsnt
 * @b: conctant
 * @n: max bytes to use
 *
 * Return: pointer s
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int com;

	for (com = 0; n > 0; com++, n--)
	{
		s[com] = b;
	}

	return (s);
}
