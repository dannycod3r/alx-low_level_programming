#include "main.h"

/**
 * create_file - create a file
 * @filename: string
 * @text_content: string
 * Return: 1 if successful else -1
 */
int create_file(const char *filename, char *text_content)
{
	int desc, writer, i = 0;

	desc = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (filename == NULL)
		return (-1);

	if (desc == -1)
		return (-1);

	if (text_content == NULL)
		return (-1);

	while (text_content[i])
	{
		writer = write(desc, &text_content[i], 1);
		if (writer == -1)
			return (-1);

		i++;
	}
	close(desc);

	return (1);
}
