#include "main.h"

/**
 * *_strchr - A function that locates a character in a string
 * @s: pointer to put the constsnt
 * @c: constsnt
 * Return: pointer to s
*/

char *_strchr(char *s, char c)
{
	int com;

	for (com = 0; s[com] >= '\0' ; com++)
	{
		if (s[com] == c)
		{
			return (s + com);
		}
	}

	return ('\0');
}
