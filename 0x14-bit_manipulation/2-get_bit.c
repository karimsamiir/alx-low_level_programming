#include"main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 *
 * @n: the number to index
 *
 * Return: the bit state or -1 on false
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	return (n >> index & 1);
}
