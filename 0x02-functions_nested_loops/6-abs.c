#include "main.h"

/**
 * _abs - A function that computes the
 *		 absolute value of an intege
 *
 *@n: take intrger type input for absolute
 * 
 * Return: Always 0 (success)
*/

int _abs(int n)
{
	if (n < 0)
		n = (-1) *n;
	return (n);
}
