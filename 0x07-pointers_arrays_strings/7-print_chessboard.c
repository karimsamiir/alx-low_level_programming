#include"main.h"

/**
 * print_chessboard - A function that prints the chessboard
 * @a: row
 *
 * Return: nothing
*/

void print_chessboard(char (*a)[8])
{
	int com, tom;

	for (com = 0; com < 8; com++)
	{
		for (tom = 0; tom < 8; tom++)
		{
			_putchar(a[com][tom]);
		}
		_putchar('\n');
	}
}
