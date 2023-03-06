#include "main.h"

/**
 * _memcpy - copy memory
 *
 * @dest: destination memory
 *
 * @src: source memory
 *
 * @n: bytes from memory
 *
 * Return: 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
	{
		dest[x] = src[x];
	}

	return (dest);
}
