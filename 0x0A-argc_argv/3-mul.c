#include <stdio.h>
#include <stdib.h>

/**
 * main - A program that multiplies two numbers
 *
 * @com: num of commandline
 * @tom: pointer to an array of commcndline
 *
 * Return: 0 (success), not 0 (error)
*/

int main(int com, char *tom[])
{
	int sum;

	if (com == 3)
	{
		sum = atoi(tom[1] * atoi(tom[2]);
		printf("%d\n", sum);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
