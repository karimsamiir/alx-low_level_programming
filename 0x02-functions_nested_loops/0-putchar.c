#include "main.h"

/**
 * main - Entry point
 *
 * Description: A program that prints _putchar, followed by a new line
 *
 * Return: Always 0 (success)
*/

int main(void)
{
	char str[] = "_Putchar";
	int ch;

	for (ch = 0; ch < 8; ch++)
		_putchar(str[ch]);
	-putchar('\n');

	return (0);
}
