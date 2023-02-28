#include "main.h"
/**
 * puts2 - Prints character of string
 *
 * @str: string to be treated
 *
 * Return 0
 */
void puts2(char *str)
{

	int i;
	int j = 0;

	while (str[j] != '\0')
	{
		j++;
	}

	for (i = 0; i < j; i = i + 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}
