#include "main.h"
#include <stdio.h>

/**
 * main - Prints all the args content
 *
 * @argc: argument count
 *
 * @argv: argument count
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int x;

	for (x = 0; x < argc; x++)
	{
		printf("%s\n", argv[x]);
	}

	return (0);
}
