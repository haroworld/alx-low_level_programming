#include <stdlib.h>
#include "main.h"

/**
  * flip_bits - Program to flip bit
  * @n: number to flip
  * @m: number to flip
  *
  * Return: 0
  */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = 0, counter = 0;

	x = n ^ m;
	while (x)
	{
		if (x & 1)
			counter++;

		x >>= 1;
	}

	return (counter);
}
