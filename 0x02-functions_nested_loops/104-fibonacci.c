#include"main.h"

/**
 * Description: A program that finds and
 *			prints the first 98 Fibonacci numbers,
 *			starting with 1 and 2, followed by a new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	int count, initialis;
	unsigned long a1 = 1, a2 = 2, sum, max = 100000000, a3 = 0, a4 = 0, sum1 = 0;

	for (count = 1; count <= 98; count++)
	{
		if (a3 > 0)
			printf("%lu", a3);
		initialis = numlength(max) - 1 - numlength(a1);

		while (a3 > 0 && initialis > 0)
		{
			printf("%d", 0);
			initialis--;
		}

		printf("%lu", a1);

		sum = (a1 + a2) % max;
		sum1 = a3 + a4 + (a1 + a2) / max;
		a1 = a2;
		a3 = a4;
		a2 = sum;
		a4 = sum1;

		if (count != 98)
			printf(", ");
		else
			printf("\n");
	}

	return (0);
}

