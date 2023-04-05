#include <stdlib.h>
#include "lists.h"
#include <stdio.h>

/**
  * get_nodeint_at_index - program that return the nth node of a linked list
  * @head: the head
  * @index: index
  *
  * Return: 0
  */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter;

	counter = 0;

	if (head)
	{
		while (head)
		{
			if (counter == index)
				return (head);

			head = head->next;
			counter++;
		}
	}

	return (NULL);
}
