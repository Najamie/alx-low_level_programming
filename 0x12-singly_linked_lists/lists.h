#ifndef LISTS_H
#define LISTS_H

#include <stddef.h>

/**
 * struct list_s - Singly linked list
 * @str: String (char *)
 * @len: Length of the string
 * @next: Pointer to the next node
 *
 * Description: Singly linked list node structure
 */
typedef struct list_s
{
    char *str;
    unsigned int len;
    struct list_s *next;
} list_t;

/* Prototype for the print_list function */
size_t print_list(const list_t *h);

/* Prototype for the _putchar function */
int _putchar(char c);

#endif
