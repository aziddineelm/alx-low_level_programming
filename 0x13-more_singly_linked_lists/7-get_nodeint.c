#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to the head of the listint_t list.
 * @index: index of the node, starting at 0.
 *
 * Return: pointer to the nth node of the listint_t list or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
    unsigned int i = 0;
    listint_t *current = head;

    while (current != NULL && i < index)
    {
        current = current->next;
        i++;
    }

    return (i == index) ? current : NULL;
}
