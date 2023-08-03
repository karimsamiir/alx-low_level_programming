#include"main.h"

/**
 * print_binary - A function that prints the binary representation of a number
 *
 * @n: number to print
 *
 * Return:void
*/

void print_binary(unsigned long int n)
{
	int coo = sizeof(n) * 8, printed = 0;

	while (coo)
	{
		if (n & 1l << --b)
		{
			_putchar('1');
			printed++;
		}
		else if (printed)
			_putchar('0');
	}
	if (!printed)
		_putchar('0');
}
