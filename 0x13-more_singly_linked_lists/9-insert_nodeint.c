#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position in a linked list
 * @head: pointer to the head of the list
 * @idx: index where the new node should be inserted
 * @n: integer to store in the new node
 *
 * Return: address of the new node or NULL on failure
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new_node, *temp_node;
	unsigned int i;

	if (!head)
		return (NULL);

	new_node = malloc(sizeof(listint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	temp_node = *head;
	for (i = 0; temp_node && i < idx - 1; i++)
		temp_node = temp_node->next;

	if (!temp_node)
	{
		free(new_node);
		return (NULL);
	}

	new_node->next = temp_node->next;
	temp_node->next = new_node;

	return (new_node);
}
