#include"main.h"

/**
 * _strcat - A function that concatenates two strings
 *
 * @dest: pointer to destnantion input
 * @src: pointer to source input
 *
 * Return: pointer to resuting srtring @dest
*/

char *_strcat(char *dest, char *src)
{
	int c, c2;

	c = 0;

	while (dest[c])
		c++;

	for (c2 = 0; src[c2] ; c2++)
		dest[c++] = src[c2];

	return (dest);
}
