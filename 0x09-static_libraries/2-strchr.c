#include "main.h"

/**
 * _strchr - locate character in string
 *
 * @s: source string
 *
 * @c: character to find
 *
 * Return: 0
 */
char *_strchr(char *s, char c)
{
	int x = 0, y;

	while (s[x])
	{
		x++;
	}

	for (y = 0; y <= x; y++)
	{
		if (c == s[y])
		{
			s += y;
			return (s);
		}
	}

	return ('\0');
}
