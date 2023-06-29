#include"main.h"


/**
 * print_square - A  function that prints a square, followed by a new line
 *
 * @size: the size of the square
 *
 * Return: Always 0 (success)
*/

void print_square(int size)
{
	int row, colum;

	for (row = 1; row <= size; row++)
	{
		for (colum = 1; colum <= size; colum++)
			_putchar('#');
		_putchar('\n');
	}
}
