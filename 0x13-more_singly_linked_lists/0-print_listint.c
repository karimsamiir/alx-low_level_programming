#include"list.h"

/**
 * print_listint - A function that prints all the elements of a listint_t list
 *
 * @h: pointer for first node
 *
 * Return: size of the list
*/

size_t print_listint(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		printf("%d\n", h->n);
		h = h->next;
		k++;
	}

	return (k);
}
