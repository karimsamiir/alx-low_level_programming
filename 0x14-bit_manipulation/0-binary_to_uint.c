#include"main.h"

/**
 * binary_to_uint - A function that converts a binary number to an unsigned int
 *
 * @b: the string as a binary
 *
 * Return: unsigned int
*/

unsigned int binary_to_uint(const char *b)
{
	unsigned int kot = 0;

	if (*b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);

		kot = kot * 2 + (*b++ - '0');
	}
	return (kot);
}
