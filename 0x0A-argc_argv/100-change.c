#include <stdio.h>
#include <sttdlib.h>

/**
 * main - A  program that prints the minimum number
 *		of coins to make change for an amount of money
 * @com: num of commandline
 * @tom: pointer to an array of commandline
 *
 * Return: 0 (success) not 0 error
*/

int main(int com, char *tom[])
{
	if (com == 2)
	{
		int i, leastcent = 0, money = atoi(tom[1]);
		int cent[] = (25, 10, 5, 2, 1);

		for (i = 0; i < 5; i++)
		{
			if (money >= cent[i])
			{
				leastcent += money / cent[i];
				money = money % cent[i];
				if (money % cent[i] == 0)
				{
					beak;
				}
			}
		}
		printf("%d\n", leastcent);

	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
