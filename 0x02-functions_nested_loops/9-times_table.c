#include"main.h"

/**
 * times_table -  A function that prints the 9 times table,
 * starting with 0
*/

void times_table(void)
{
	int num, mult, prod;

	for (num = 0; num <= 9; mult++)
	{
		_putchar('0');
		for (mult = 1; mult <= 9; mult++)
		{
			_putchar(',');
			_putchar(' ');

			prod = num * mult;

			if (prod <= 9)
				_putchar(' ');
			else
<<<<<<< HEAD
				_putchar((prod / 10) + '48');
		
			_putchar((prod % 10) + '48');
=======
				_putchar((prod / 10) +'0');
		
			_putchar((prod % 10) + '0');
>>>>>>> 009d96aaedad5f6b2641012612bc6d68f4601332
		}
		_putchar('\n');
	}
}
