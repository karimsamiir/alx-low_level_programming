#include <stdio.h>

/**
 * main _ Entry point
 *
 * Description: print 0, 1, -9
 *
 * Return: Always 0 (Succes)
*/

int main(void)
{
	int digit = 0;

	while (digit <= 9)
	{
		putchar(digit + 48);

		if (digit != 9)
		{
			putchar(',');
			putchar(' ');
		}
		digit++;
	}
	putchar('\n');

	return (0);
}
