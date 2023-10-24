#include "lists.h"

/**
 *  pop_listint - deletes the head node of a listint_t linked list,
 *  and returns the head nodes data (n)
 *  @head: double pointer to the list
 *
 *  Return: the head nodes data(n). If linked list is empty, return 0.
 */

int pop_listint(listint_t **head)
{
	listint_t *temp;
	int n;

	if (*head == NULL)
		return (0);

	temp = *head;
	n = temp->n;
	*head = temp->next;
	free(temp);

	return (n);

}

