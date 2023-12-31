#include"main.h"

/**
 * numLength - return the length of string
 *
 * @num: operand number
 *
 * Return: number of digits
*/

int numLength(int num)
{
	int length = 0;

	if (!num)
		return (1);
	while (num)
	{
		num = num / 10;
		length += 1;
	}

	return (length);
}

/**
 * main - Entry point
 *
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
		initialis = numLength(max) - 1 - numLength(a1);

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

