#include "main.h"
#include <stdio.h>
/**
 * _isupper - check if character is capital letter
 *
 * @c: character to be checked
 *
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
	return (1);
	}
	else
	{
	return (0);
	}
}
