#include "main.h"
#include <stdio.h>

/**
 * reverse_array - Reverse the content of an array integers
 *
 * @a: An arraynof integers
 *
 * @n: number of elements to swap
 */
void reverse_array(int *a, int n)
{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < 1 / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
