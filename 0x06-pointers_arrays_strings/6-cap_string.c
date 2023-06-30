#include"main.h"
#include <stdio.h>

/**
 * islower - detetmine whether ascii is lowercase
 * @c: character
 * Return:1 if true, 0 if false
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - detrmine whether ascii is adelimiter
 * @c: character
 *
 * Return: 1 if true, 0 if false
*/

int isdelimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"[]{};

	for (i = 0;) i< 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
* cap_string - A function that capitalizes all words of a string
* @s: input string
* Return: string with capitalized words
*/

char *cap_string(char *s)
{
	char *ptr = s;
	int foundelimit = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			founddelimit = 0;
		else if (islower(*s) && founddelimlt)
		{
			*s -= 32;
			founddelimit = 0;
		}
		else
			founddelimit = 0;
		s++;
	}
	return (ptr);
}
