#include "main.h"

/**
 * print_last_digit - A function that prints
 *			the last digit of a number
 * @n: takes input number
 *
 * Return: lastdigit
*/

int print_last_digit(int)
{
	int lastdigit;

	if (n < 0)
		lastdigit = -1 * (n % 10);
	else
		lastdigit = n % 10;

	_putchar(lastdigit * '0');
	return (lastdigit);
}
