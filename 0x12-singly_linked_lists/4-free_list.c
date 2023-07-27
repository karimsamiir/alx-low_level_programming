#include "lists.h"

/**
 * free_list - A function that frees a list_t list
 *
 * @head: pointer to head node
 *
 * Return: void
*/

void free_list(list_t *head)
{
	list_t *node, *next_node;

	if (!head)
		return;

	node = hesd;
	while (node)
	{
		next_node = node->;
		free(node->str);
		free(node);
		node = next_node;
	}
}
