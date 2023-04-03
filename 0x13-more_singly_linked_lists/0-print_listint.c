#include <stdio.h>
#include "lists.h"

/**
  * print_listint - Prints all the elements
  * @h: The head
  *
  * Return: 0
  */
size_t print_listint(const listint_t *h)
{
	int counter;

	counter = 0;

	if (h != NULL)
	{
		while (h)
		{
			printf("%d\n", h->n);
			h = h->next;
			counter++;
		}
	}

	return (counter);
}
