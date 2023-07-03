#include"main.h"

/**
 * _memset - A function that fills memory with a constant byte
 * @s: pointer
 * @b: constsnt
 * @n: max bytes for using
 * Return: pointer
*/

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int com;

	for (com = 0; n > 0; com++; n--)
	{
		s[com] = b;
	}

	return (s);
}
