#include"lists.h"

/**
 * reverse_listint - A function that reverses a listint_t linked list
 *
 * @head: the address of the pointer to the first node
 *
 * Return: the address of the head
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *znode = NULL, *znext = NULL;

	if (!head || !*head)
		return (NULL);

	znode = *head;
	*head = NULL;
	while (node)
	{
		znext = znode->znext;
		znode->znext = *head;
		*head = znode;
		znode = znext;
	}

	return (*head);
}
