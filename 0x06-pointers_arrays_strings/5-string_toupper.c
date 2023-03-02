#include "main.h"
/**
 * string_toupper - changes all lowercase to uppercase
 *
 * @p: The string to modified
 *
 * Return: 0;
 */
char *string_toupper(char *p)
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
		{
			p[a] -= 32;
		}

		a++;
	}

	return (p);
}
