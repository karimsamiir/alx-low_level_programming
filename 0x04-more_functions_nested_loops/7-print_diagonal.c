#include "main.h"

/**
 * print_diagonal - A function that draws a diagonal line on the terminal
 *
 * @n: the number of times \ should be printed
 */
void print_diagonal(int n)
{
	int var, kir;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}

	for (var = 1; var <= n; var++)
	{
		for (kir = 1; kir < var; kir++)
			_putchar(' ');

		_putchar('\\');
		_putchar('\n');
	}
}

