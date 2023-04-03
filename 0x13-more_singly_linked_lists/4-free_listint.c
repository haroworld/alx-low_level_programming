#include <stdlib.h>
#include "lists.h"

/**
  * free_listint - program to free linked list
  * @head: The head
  *
  * Return: 0
  */
void free_listint(listint_t *head)
{
	listint_t *x;

	while (head)
	{
		x = head;
		head = head->next;
		free(x);
	}

	free(head);
}
