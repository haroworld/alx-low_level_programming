#include <stdlib.h>
#include <stdio.h>
#include "lists.h"

/**
  * insert_nodeint_at_index - program to refactor
  * @head: head
  * @idx: index
  * @n: number
  *
  * Return: 0
  */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *iteration;
	unsigned int counter = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			iteration = *head;
			while (iteration)
			{
				if (counter == idx)
				{
					new->next = iteration->next;
					iteration->next = new;
					return (new);
				}
				iteration = iteration->next;
				counter++;
			}
			if (idx > counter)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
