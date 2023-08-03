#include"main.h"

/**
 * get_bit - A function that returns the value of a bit at a given index
 *
 * @n: number to the index
 *
 * Return: the bit state or -1 on false
*/

int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return ((unsigned int)-1);

	return (int)(n >> index & 1);
}
