#include "main.h"

/**
 * _strncat - concatinate strings
 *
 * @dest: Destination
 *
 * @src: Source
 *
 * @n: limit
 *
 * Return: 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int l = 0;
	int j = 0;

	while (dest[l])
	{
		l++;
	}

	while (j < n && src[j])
	{
		dest[l] = src[j];
		l++;
		j++;
	}

	dest[l + n + 1] = '\0';

	return (dest);
}
