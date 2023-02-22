#include "main.h"
#include <stdio.h>

/**
 * _islower - program to check alphabet if its lower
 *
 * c - is the file to be checked
 *
 * Return: 1 if char is lower case otherwose 0
 */

int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
