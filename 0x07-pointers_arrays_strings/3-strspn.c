#include"main.h"

/**
 * _strspn - A function that gets the length of a prefix substring
 *
 * @s: string
 * @accept: bytes
 * Return: unsigned int
*/

unsigned int _strspn(char *s, char *accept)
{
	unsigned int com, tom;

	for (com = 0; s[com] != '\0'; com++)
	{
		for (tom = 0; accept[tom] != s[tom]; tom++)
		{
			if (accept[tom] == '\0')
				return (tom);
		}
	}

	return (com);
}
