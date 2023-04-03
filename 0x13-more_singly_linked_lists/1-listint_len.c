#include <stdio.h>
#include "lists.h"

/**
  * listint_len - Counts element
  * @h: The head
  *
  * Return: 0
  */
size_t listint_len(const listint_t *h)
{
	int counter;

	counter = 0;

	if (h != NULL)
	{
		while (h)
		{
			h = h->next;
			counter++;
		}
	}

	return (counter);
}
