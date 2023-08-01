#include"lists.h"

/**
 * add_nodeint - A function that adds a new node at the beginning
 *			of a listint_t list
 *
 * @n: the value of the new node
 * @head: pointer for the first node
 *
 * Return: pointer to the new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));

	if (!head || !new_node)
		return (NULL);

	new_node->next = NULL;
	new_node->n = n;

	if (*head)
		new_node->next = *head;
	*head = new_node;
	return (new_node);
}
