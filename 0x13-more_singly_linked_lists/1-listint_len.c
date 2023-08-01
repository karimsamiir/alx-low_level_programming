#include"lists.h"

/**
 * listint_len - A function that returns the number of elements
 *			in a linked listint_t list
 *
 * @h: pointer for the first node
 *
 * Return: size of the list
*/

size_t listint_len(const listint_t *h)
{
	size_t k = 0;

	while (h)
	{
		h = h->next;
		k++;
	}

	return (k);
}
