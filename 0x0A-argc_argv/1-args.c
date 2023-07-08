#include <stdio.h>

/**
 * main - A program that prints the number of arguments passed into it
 *
 * com: num of command line arguments
 * tom: pointer to an array of commandline arguments
 *
 * Return: 0(success), not 0 error
*/

int main(int com, char *tom[] __attribute__((unused)))
{
	printf("%d\n", com - 1);
	return (0);
}
