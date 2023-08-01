#include"lists.h"

/**
 * free_listint2 - A function that frees a listint_t list
 *
 * @head: the address of the pointer for the first node
 *
 * Return: void
*/

void free_listint2(listint_t **head)
{
	listint_t *nnode, *cot;

	if (!head)
		return;

	nnode = *head;

	while (nnode)
	{
		cot = nnode;
		nnode = nnode->next;
		free(cot);
	}

	*head = NULL;
}
