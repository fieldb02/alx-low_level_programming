#include "main.h"

/**
  * append_text_to_file - appends
  * @filename: file
  * @text_content: contents
  *
  * Return: contents
  */
int append_text_to_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_APPEND);
	if (f == -1)
		return (-1);

	if (text_content)
	{
		if (write(f, text_content, strlen(text_content)) == -1)
			return (-1);
	}

	close(f);
	return (1);
}
