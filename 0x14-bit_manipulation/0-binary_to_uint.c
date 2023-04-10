#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * binary_to_uint - Program to Converts a binary number to an unsigned int
  * @b: Binary string to converts
  *
  * Return: Positive number converted from a binary
  */
unsigned int binary_to_uint(const char *b)
{
	unsigned int lent = 0, counter = 0, sum = 0;

	if (b == NULL)
		return (0);

	lent = _strlen(b);
	while (lent--)
	{
		if (b[lent] != 48 && b[lent] != 49)
			return (0);

		if (b[lent] == 49)
			sum += 1 << counter;

		counter++;
	}

	return (sum);
}

/**
  * _strlen - Returns the length of a string
  * @s: String to count
  *
  * Return: String length
  */
int _strlen(const char *s)
{
	int x = 0;

	while (s[x])
		x++;

	return (x);
}
