#include "main.h"

/**
 * append_text_to_file - add text content to the end of a file
 * @filename: string
 * @text_content: string
 * Return: 1 if successful else -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int desc, writer, count;

	if (filename == NULL)
		return (-1);

	desc = open(filename, O_WRONLY | O_APPEND);

	if (desc == -1)
		return (-1);

	if (text_content != NULL)
	{
		for (count = 0; text_content[count]; count++)
			;

		writer = write(desc, text_content, count);
	}

	close(desc);

	if (text_content != NULL && writer == -1)
		return (-1);

	return (1);
}
