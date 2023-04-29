#include "lists.h"

/**
 * free_listint - Frees a listint_t list.
 * @head: A pointer to the head of the listint_t list.
 **/
void free_listint(listint_t *head)
{
	listint_t *current, *temp;

	if (head == NULL)
		return;

	current = head;
	while (current != NULL)
	{
		temp = current->next;
		free(current);
		current = temp;
	}
}
