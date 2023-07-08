#include <stdio.h>

/**
 * main - A program that prints all arguments it receives
 *
 * @com: int
 * @tom: list
 *
 * Return: 0 (success)
*/

int main(int com, char const *tom[])
{
	int i = 0;

	while (com--)
	{
		printf("%s\n", tom[i]);
		i++;
	}

	return (0);
}
