#include"lists.h"

/**
 * pop_listint - a function that deletes the head node of
 *	a listint_t linked list, and returns the head node’s data (n)
 *
 * @head: the address of the pointer for the first node
 *
 * Return: the value of the popped node
*/

int pop_listint(listint_t **head)
{
	listint_t *nnode;
	int k;

	if (!head || !*head)
		return (0);

	nnode = (*head)->next;
	k = (*head)->n;
	free(*head);
	*head = nnode;

	return (k);
}
