#include "lists.h"

/**
 * pop_listint - deletes head of node
 * @head: pointer to pointer to node
 * Return: head node data(n)
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int ret;

	if (*head == NULL)
		return (0);

	temp = *head;
	ret = (*head)->n;
	*head = (*head)->next;

	free(temp);

	return (ret);
}
