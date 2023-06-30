#include"main.h"

/**
 * *_strcpy - A function that copies the string pointed to by src
 * @dest: char type string
 * @scr: char type string
 * Description: copy the string to dest
 *
 * Return: pointer to dest
*/

char *_strcpy(char *dest, char *src)
{
	int i = -1;

	do {
		i++;
		dest[i] = src[i];
	}while (src[i] != '\0');

	return (dest);
}
