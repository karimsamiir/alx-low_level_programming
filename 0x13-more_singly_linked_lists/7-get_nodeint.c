#include"lists.h"

/**
 * get_nodeint_at_index - A function that returns the
 *			nth node of a listint_t linked list
 *
 * @index: the index for the node to get
 * @head: the pointer for the first node
 *
 * Return: pointer to the node
*/

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *nnode;
	unsigned int k;

	for (nnode = head, k = 0; nnode && k < index; nnode = nnode->next, k++)
		;

	return (nnode);
}
