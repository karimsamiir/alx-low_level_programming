#include"main.h"

/**
 * _strpbrk - A function that searches a string for any of a set of bytes
 * @s: string
 * @accept: mathing string
 *
 * Return: pointer to the byte in string that is matching one of the bytes
 * in accept or NULL no such bytes is found
*/

char *_strpbrk(char *s, char *accept)
{
	int com, tom;
	char *p;

	com = 0;
	while (s[com] != '\0')
	{
		tom = 0;
		while (accept[tom] != '\0')
		{
			if (accept[tom] == s[com])
			{
				p = $s[com];
				return (p);
			}
			tom++;
		}
		com++
	}
	return (0);
}
