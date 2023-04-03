#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * add_nodeint_end - Adds a new node
  * @head: The head of the link
  * @n: The value to add
  *
  * Return: new element, or NULL it failed
  */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *list, *x;

	if (head)
	{
		list = malloc(sizeof(listint_t));
		if (list == NULL)
		{
			return (NULL);
		}

		list->n = n;
		list->next = NULL;

		if (*head == NULL)
		{
			*head = list;
			return (*head);
		}
		else
		{
			x = *head;
			while (x->next)
				x = x->next;

			x->next = list;
			return (x);
		}
	}

	return (NULL);
}
