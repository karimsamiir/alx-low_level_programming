#include "main.h"

/**
 * print_square - A function that prints a square, followed by a new line
 *
 * @size: the size of the square
 */
void print_square(int size)
{
	int row, column;

	if (size <= 0)
	{
	_putchar('\n');
	return;
	}

	for (row = 1; row <= size; row++)
	{
		for (column = 1; column <= size; column++)
		{
			_putchar('#');
		}
	_putchar('\n');
	}
}

