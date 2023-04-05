#include <stdlib.h>
#include "lists.h"

/**
  * sum_listint - sum all list
  * @head: head
  *
  * Return: sum
  */
int sum_listint(listint_t *head)
{
	int x = 0;

	if (head)
	{
		while (head)
		{
			x += head->n;
			head = head->next;
		}
	}

	return (x);
}
