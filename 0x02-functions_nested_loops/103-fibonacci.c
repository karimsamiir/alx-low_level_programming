#include"main.h"

/**
 * main - Enrty point
 *
 * Description: Each new term in the Fibonacci sequence is generated
 *			by adding the previous two terms. By starting with 1 and 2,
 *			the first 10 terms will be: 1, 2, 3, 5, 8, 13, 21, 34, 55, 89.
 *			By considering the terms in the Fibonacci sequence whose values do not
 *			exceed 4,000,000, write a program that finds
 *			and prints the sum of the even-valued terms,
 *			followed by a new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	unsigned long fib1 = 0, fib2 = 1, sum;
	float total_sum;

	while (1)
	{
		sum = fib1 + fib2;

		if (sum > 4000000)
			break;
		if ((sum % 2) == 0)
			total_sum += sum;

		fib1 = fib2;
		fib2 = sum;
	}
	printf("%.0f\n", total_sum);

	return (0);
}
