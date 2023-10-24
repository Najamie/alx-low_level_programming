#include "lists.h"

/**
 * listint_len - the number of elements in a linked listint_t list.
 * @h: pointer to the head list
 *
 * Return: number of elements in a linked listint_t list
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *current = h;

	while (current != NULL)
	{
		count++;
		current = current->next;
	}

	return (count);
}

