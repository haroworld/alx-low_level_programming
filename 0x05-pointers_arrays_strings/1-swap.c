#include "main.h"
/**
 * swap_int - swaps value of variable
 *
 * @a: An integer to swap
 *
 * @b: second integer to swap
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
