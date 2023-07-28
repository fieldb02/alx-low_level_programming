#include "main.h"

/**
 * read_textfile - Reads and prints a text file to the standard output.
 * @filename: The source file.
 * @letters: Number of letters to read and print.
 *
 * Return: The actual number of letters read and printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int f, r;
	char *buffer;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);
	if (f == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(f);
		return (0);
	}

	r = read(f, buffer, letters);
	if (r == -1)
	{
		free(buffer);
		close(f);
		return (0);
	}

	if (write(STDOUT_FILENO, buffer, r) != r)
	{
		free(buffer);
		close(f);
		return (0);
	}

	free(buffer);
	close(f);
	return (r);
}
