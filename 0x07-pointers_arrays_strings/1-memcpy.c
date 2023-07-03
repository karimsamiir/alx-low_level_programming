#include "main.h"

/**
 * *_memcpy - A function that copies memory area
 * @dest: memory area
 * @src: source
 * @n: length of source to be copied
 *
 * Return: the pointer to dest
*/

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int com;

	for (com = 0; com < n; com++)
	{
		dest[com] = src[com];
	}
	return (dest);
}
