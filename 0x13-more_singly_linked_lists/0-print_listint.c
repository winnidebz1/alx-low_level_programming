#include <stdio.h>
#include "lists.h"
/**
 * orint_listint - prints all elements of a linked list
 * @h: linked list of type listint_t to print
 * Return: numberof nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		count++;
		h = h->next;
	}

	return (count);
}
