#include "main.h"
#include <stdio.h>
/**
 * _strcat - Concatinates strings
 *
 * @dest: Destination string
 *
 * @src: source string
 *
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int l = 0;
	int i;

	while (dest[l])
	{
		l++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[l] = src[i];
		l++;
	}

	dest[l] = '\0';
	return (dest);
}

