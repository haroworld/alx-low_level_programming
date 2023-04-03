#include <stdlib.h>
#include "lists.h"

/**
  * pop_listint - program to delete the head of nodelist
  * @head: node to delete
  *
  * Return: 0
  */
int pop_listint(listint_t **head)
{
	listint_t *n_head;
	int x = 0;

	if (*head != NULL)
	{
		n_head = (*head)->next;
		x = (*head)->n;
		free(*head);
		*head = n_head;
	}

	return (x);
}
