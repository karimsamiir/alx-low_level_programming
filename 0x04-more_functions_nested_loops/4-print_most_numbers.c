#include"main.h"

/**
 * print_most_numbers - A function that prints the numbers,
 *			from 0 to 9, followed by a new line
 * 
 * Return: Always 0 (success)
*/

void print_most_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		if (num == 2 || num == 4)
			continue;
		_putchar(num + 40);
	}
	_putchar('\n');
}
