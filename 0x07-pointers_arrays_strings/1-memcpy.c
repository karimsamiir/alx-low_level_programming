#include"main.h"

/**
 * *_memcpy - copy memory
 * @dest: memory
 * @src: source
 * @n: the length copied from src
 *
 * Return: pointer to dest
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
