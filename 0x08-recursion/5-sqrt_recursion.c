#include"main.h"

/**
 * _sqrt_recursion - A function that returns the natural
 *			square root of a number
 *
 * @n: int
 *
 * @com: square root
 *
 * Return: int
*/

int square(int n, int com);
int _sqrt_recursion(int n)
{
	return (square(n, 1));
}

/**
 * square - A function that returns the natural
 *			square root of a number
 *
 * @n: int to find square root
 *
 * @com: square root
 *
 * Return: int
*/

int _sqrt_recursion(int n)
{
	if (com * com == n)
		return (com);
	else if (com * com < n)
		return (square(n, com + 1));
	else
		return (-1);
}
