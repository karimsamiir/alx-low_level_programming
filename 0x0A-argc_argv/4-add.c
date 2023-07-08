#include <stdio.h>
#include <stdlib.h>

/**
 * main - A program that adds positive numbers
 *
 * @com: num of arguments
 * @tom: array of pointers
 *
 * Return: Always 0 (success)
*/

int main(int com, char *tom[])
{
	int sum = 0;
	char *c;

	while (--com)
	{
		for (c = tom[com]; *c; c++)
			if (*c < '0' || *c > '9')
				return (printf("Error\n"), 1);
		sum += atoi(tom[com]);
	}
	printf("%d\n", sum);
	return (0);
}
