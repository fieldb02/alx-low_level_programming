#include "main.h"

/**
  * read_textfile - ...
  * @filename: The source file
  * @letters: Number of letters to reads and prints
  *
  * Return: ...
  */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r;
	char *b = malloc(sizeof(char *) * letters);

	if (!b)
		return (0);

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY, 0600);
	if (f == -1)
		return (0);

	r = read(f, b, letters);
	write(STDOUT_FILENO, b, r);

	free(b);
	close(f);
	return (r);
}
