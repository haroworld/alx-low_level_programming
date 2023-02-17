#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	char cr;

	cr = 'a';

	while
		(cr <= 'z') {
			putchar(cr);
			cr++;
		}
	putchar('\n');

	return (0);
}
