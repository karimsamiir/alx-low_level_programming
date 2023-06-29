#include"main.h"

/**
 * print_line - A function that draws a straight line in the terminal
 *
 * @n: is number of printed times
*/

void print_line(int n)
{
	int count;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (count = 1; count <= n; count ++)
			_putchar('_');
		_putchar('\n');
	}
}
