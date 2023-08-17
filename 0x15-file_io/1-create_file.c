#include "main.h"

/**
  * create_file - Creates a file
  * @filename: ???
  * @text_content: input content
  *
  * Return: nada
  */
int create_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
		return (-1);

	f = open(filename, O_RDWR | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (f == -1)
		return (-1);

	if (text_content)
		write(f, text_content, strlen(text_content));

	close(f);
	return (1);
}
