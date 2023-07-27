#include "lists.h"

/**
 * _strlen - returns the lenght of a string
 *
 * @k: the string whose lenght to check
 *
 * Return: integer lenght of string
*/

int _strlen(char *k)
{

	int a = 0;

	if (!k)
		return (0);
	
	while (*k++)
		a++;
	return (a);
}

/**
 * print_list - prints a linked lists
 *
 * h: pointer to first node
 *
 * Return: size of list
*/

size_t print_list(const list_t *h)
{
	size_t k =0;

	while (h)
	{
		printf("[%d] %s\n", _strlen(h->str), h->str ? h->str : "(nil)");
		h = h->next;
		k++;
	}
	return (k)
}
