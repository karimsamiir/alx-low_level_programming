#include<stdio.h>

/**
 * _sqrt - A program that finds the square root
 *
 * @x: input number
 *
 * Return: square root of x
*/

double _sqrt(double x)
{
	float sqrt, tmp;

	sqrt = x / 2;
	tmp = 0;

	while (sqrt != tmp)
	{
		tmp = sqrt;
		sqrt = (x / tmp + tmp) / 2;
	}
	return (sqrt);
}

/**
 * largest_prime_factor - find and print the largest prime factor
 *
 * @num: number to find
*/

void largest_prime_factor(long int num)
{
	int prmnu, largest;

	while (num % 2 == 0)
		num = num / 2;

	for (prmnu = 3; prmnu <= _sqrt(num); prmnu += 2)
	{
		while (num % prmnu == 0)
		{
			num = num / prmnu;
			largest = prmnu;
		}
	}

	if (num > 2)
		largest = num;
	printf("%d\n", largest);
}

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	largest_prime_factor(612852475143);

	return (0);
}
