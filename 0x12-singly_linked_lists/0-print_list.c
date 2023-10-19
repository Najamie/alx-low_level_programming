#include <stdlib.h>
#include "lists.h"

/**
 * print_list - Prints the elements of a linked list.
 * @h: Pointer to the head of the list.
 * Return: The number of nodes in the list.
 */
size_t print_list(const list_t *h)
{
    int count = 0;

    while (h)
    {
        if (h->str == NULL)
        {
            _putchar('[');
            _putchar('0');
            _putchar(']');
            _putchar(' ');
            _putchar('(');
            _putchar('n');
            _putchar('i');
            _putchar('l');
            _putchar(')');
            _putchar('\n');
        }
        else
        {
            _putchar('[');
            _putchar(h->len + '0');
            _putchar(']');
            _putchar(' ');
            while (*(h->str))
            {
                _putchar(*(h->str));
                h->str++;
            }
            _putchar('\n');
        }
        count++;
        h = h->next;
    }
    return (count);
}
