#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - A function that returns the sum of all its parameters
 *
 * @n: num of args
 * @...: the int num
 *
 * Return: int sum
*/

int sum_them_all(const unsigned int n, ...)
{
	int k = 0;
	unsigned int a = n;
	va_list ap;

	if (n == 0)
	return (0);

	va_start(ap, n);
	while (a--)
	k += va_arg(ap, int);
	va_end(ap);

	return (k);
}

