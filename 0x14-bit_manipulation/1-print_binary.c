#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
  * print_binary - Program to prints the binary representation of a number
  * @n: Number to represent in binary
  *
  * Return: 0
  */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	_divide(n);
}

/**
  * _divide - program for division
  * @n: number to divide
  *
  * Return: 0
  */
void _divide(unsigned long int n)
{
	if (n < 1)
		return;

	_divide(n >> 1);

	if (n & 1)
		_putchar('1');
	else
		_putchar('0');
}
