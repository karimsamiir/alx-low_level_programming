#include "function_pointers.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - check code for school students
 *
 * @argc: the num of args
 * @argv: arg vector
 *
 * Return: Always 0 (success)
 */

int main(int argc, char **argv)
{
	unsigned char *p = (unsigned char *)main;
	int b;

	if (argc != 2)
	{
	printf("Usage: %s <num_of_bytes>\n", argv[0]), exit(1);
	}

	b = atoi(argv[1]);
	if (b <= 0)
	{
	printf("Error: Invalid number of bytes.\n"), exit(2);

	}

	while (b--)
	printf("%02hhx%s", *p++, b ? " " : "\n");

	return (0);
}
