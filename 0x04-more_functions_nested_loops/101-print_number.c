#include"main.h"

/**
 * print_number - A function that prints an integer
 *
 * @n: the printed integer
*/

void print_number(int n);
{
	unsigned int num = n;

	if (n < 0)
	{
		_putchar('_');
		num = -num;
	}

	if ((num / 10) > 0)
		prints_number(num / 10);

	_putchar((num % 10) + 48);
}
