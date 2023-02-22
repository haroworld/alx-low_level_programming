#include "main.h"
#include <stdio.h>
/**
 * _isalpha - check if c is alphabet
 * @c: to be checked
 * Return: 1 if c is alphabet otherwise 0
 */

int _isalpha(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
}
