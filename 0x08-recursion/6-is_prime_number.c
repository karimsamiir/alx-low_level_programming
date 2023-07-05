#include"main.h"
#include<stdio.h>

/**
 * is_prime_number - A function that returns 1 if the input integer
 *			is a prime number, otherwise return 0
 *
 * @com: int
 * @n: int
 *
 * Return: (0)or(1)
*/

int chek_prime(int n, int com);
int is_prime_number(int n)
{
	return (chek_prime(n, 2));
}

/**
 * check_prime - check all number < n and divisable by n
 *
 * @n: int
 * @com: int 
 *
 * Return: int
*/

int chek_prime(int n, int com)
{
	if (com >= n && n > 1)
		return (1);
	else if (n % com == 0 || n <= 1)
		return (0);
	else
		return (chek_prime(n, com + 1));
}
