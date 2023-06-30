#include "main.h"

/**
 * reverse_array - A function that reverses the content of an array of integers
 *
 * @a: array of integers
 * @n: number of elements to swap
 *
 * Return: nothing
*/

void reverse_array(int *a, int n)
{
	int i, h, d;

	for (i = 0; h = (n - 1); i < h; i++, h--)
	{
		d = a[i];
		a[i] = a[h];
		a[h] = d;
	}

}
