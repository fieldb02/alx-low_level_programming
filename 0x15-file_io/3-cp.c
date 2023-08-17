#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

int cpy_file(const char *file_from, char *file_to);
ssize_t _strlen(const char *a);

/**
* main - copy of a file to another
* @argc: number of argument
* @argv: string
* Return: 0 on success, exit_failure on failure
*/
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp %s file_to\n", argv[0]);
		exit(97);
	}
	cpy_file(argv[1], argv[2]);
	return (0);
}
/**
* cpy_file -copy of a file to another
* @file_from: name of the file
* @file_to: string to add at the end of the file
* Return: 1 on success, exit_failure on failure
*/
int cpy_file(const char *file_from, char *file_to)
{
	int f, f2;
	ssize_t n, a;
	char *st = malloc(1024 * sizeof(char));
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	if (file_to == NULL || file_from == NULL)
		return (-1);
	if (access(file_from, R_OK) == -1)
	{
		dprintf(STDERR_FILENO, "%s No read permission.\n", file_from);
		exit(98);
	}
	f = open(file_from, O_RDONLY);
	if (f == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	f2 = open(file_to, O_CREAT | O_WRONLY | O_EXCL, mode);
	if (f2 == -1)
	{
		f2 = open(file_to, O_WRONLY | O_TRUNC);
		if (f2 == -1)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}

	if (st == NULL)
	{
		dprintf(2, "Error: Allocation failed\n");
		exit(1);
	}
	while ((n = read(f, st, _strlen(file_from))) > 0)
	{
		a = write(f2, st, n);
		if (a != n)
		{
			dprintf(2, "Error: Can't write to %s\n", file_to);
			exit(99);
		}
	}
	if (n == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		exit(98);
	}

	if (close(f)  == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f);
		exit(100);
	}
	if (close(f2) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", f2);
		exit(100);
	}
	free(st);
	return (0);
}

/**
* _strlen - get lenght of string
* @a: input
* Return: string size
*/
ssize_t _strlen(const char *a)
{
	ssize_t k;

	for (k = 0; a[k]; k++)
		;
	return (k);
}
