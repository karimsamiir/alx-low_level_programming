#include"main.h"

/**
 * get_endianness - A function that checks the endianness
 *
 * Return: 0 if big, 1 if small
*/

int get_endianness(void)
{
	unsigned long int k = 1;

	return (*(char *)&k);
}
