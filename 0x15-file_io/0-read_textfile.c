#include "main.h"

/**
 * read_textfile - read coontent of a file and print to stdout
 * @filename: char. Pointer to the filename
 * @letters: size_t. Number of characters to read
 * Return: the number of characters read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int desc, reader, writer;
	char *buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	/*open the file for reading*/
	desc = open(filename, O_RDONLY, 0600);
	if (desc == -1)
		return (0);

	/*read the letters of the file*/
	reader = read(desc, buffer, letters);
	if (reader == -1)
		return (0);

	/*print to stdout*/
	writer = write(STDOUT_FILENO, buffer, reader);
	if (writer == -1)
		return (0);

	close(desc);
	free(buffer);
	return (reader);
}
