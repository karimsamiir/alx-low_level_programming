#include"main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 *
 * @n: number to the index
 *
 * Return: the bit or
 * 	-1 if false
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
