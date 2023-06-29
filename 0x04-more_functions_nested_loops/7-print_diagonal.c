#include"main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 *
 * @n: the number of times \ printed
*/

void print_diagonal(int n)
{
	int var, kir;

	if (n <= 0)
		_putchar('\n');
	else
	{
		for (var = 1; var <= n; var++)
	}
		for (kir = 1; kir <= var; kir++)
			_putchar(' ');
		_putchar(92);
		_putchar('\n');
}


