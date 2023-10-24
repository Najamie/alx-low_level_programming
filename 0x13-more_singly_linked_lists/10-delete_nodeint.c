#include "lists.h"

/**
 * reverse_listint - function that reverses a listint_t linked list
 * @head: pointer to a pointer to the first node of the linked list
 *
 * Return: a pointer to the first node of the reversed list
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *node, *temp;

	if (*head == NULL)
		return (-1);
	node = *head;
	if (index == 0)
	{
		*head = node->next;
		free(node);
		return (1);
	}

	for (i = 0; i < index - 1 && node->next != NULL; i++)
	{
		node = node->next;
	}

	if (node->next == NULL)
		return (-1);
	temp = node->next;
	node->next = temp->next;
	free(temp);

	return (1);

}

