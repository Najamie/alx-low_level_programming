#include <stdio.h>
#include "lists.h"

/**
 * print_list - all the elements of the linked list printed
 * @h: pointers to the list_t lists 
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	size_t s = 0;

	while (h)
	{
		if (!h->str)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%u] %s\n",  h->str);
		}
	
		s++;
	}

	return (s);
}
