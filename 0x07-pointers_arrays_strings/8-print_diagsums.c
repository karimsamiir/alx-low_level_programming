#include"main.h"
#include<stdio.h>

/**
 * print_diagsums - A  function that prints the sum of the two
 *			diagonals of a square matrix of integers
 * @a: two dimentional array of int types
 * @size: size of array
*/

void print_diagsums(int *a, int size)
{
	int com, a1 = 0, a2 = 0;

	for (com = 0; com < size; com++)
	{
		a1 += a[com];
		a2 += a[size - com - 1[;
		a += size;
	}
	printf("%d, ", a1);
	printf("%d\n", a2);
}
