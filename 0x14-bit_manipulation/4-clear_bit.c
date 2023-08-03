#include"main.h"

/**
 * clear_bit - A function that sets the value of a bit to 0 at a given index
 *
 * @n: the number to index
 * @index: the bit to clear
 *
 * Return: 1 (success), -1 on (error)
*/

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(n) * 8)
		return (-1);

	if (*n & 1l << index)
		*n ^= 1l << index;

	return (1);
}
