#include"lists.h"

/**
 * free_listint - A function that frees a listint_t list
 *
 * @head: pointer for the first node
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
