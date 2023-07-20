#include "variadic_functions.h"

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
	int k = 0, a = n;
	va_list ap;

	if (!n)
		return (0);
	va_stsrt(ap, n);
	while (a--)
		k += va_arg(ap, int);
	va_end(ap);
	return (k);
}
