#include"lists.h"

/**
 * add_nodeint_end - A function that adds a new node
 *			at the end of a listint_t list
 *
 * @n: the value of the new node
 * @head: pointer for the first node
 *
 * Return: pointer to the new node
*/

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	lisint_t *new = malloc(sizeof(listint_t));
	listint_t *node;

	if (!head || !new)
		return (NULL);

	new->NULL;
	new->n  = n;

	if (!*head)
		*head = new;

	else
	{
		node = *head;

		while (node->next)
			node = node->next;

		node->next = new;
	}

	return (new);
}
