#include "main.h"

/**
  * read_textfile - Program to read a textfile
  * @filename: source file
  * @letters: Number of letters to reads and prints
  *
  * Return: 0
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fdir, readed;
	char *buffer = malloc(sizeof(char *) * letters);

	if (!buffer)
		return (0);

	if (!filename)
		return (0);

	fdir = open(filename, O_RDONLY, 0600);
	if (fdir == -1)
		return (0);

	readed = read(fdir, buffer, letters);
	write(STDOUT_FILENO, buffer, readed);

	free(buffer);
	close(fdir);
	return (readed);
}
