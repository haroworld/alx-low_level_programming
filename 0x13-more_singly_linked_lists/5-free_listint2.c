#include <stdlib.h>
#include "lists.h"

/**
  * free_listint2 - program that fres a list
  * @head: the head
  *
  * Return:0
  */
void free_listint2(listint_t **head)
{
	listint_t *x;

	if (head)
	{
		while (*head)
		{
			x = (*head);
			*head = (*head)->next;
			free(x);
		}
	}
	else
	{
		return;
	}

	free(*head);
	head = 0;
}
