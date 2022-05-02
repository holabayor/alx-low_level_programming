#include "main.h"

/**
 * create_file - creates a file
 * @filename: file to be read
 * @text_content: the text content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fd, len = 0;
	ssize_t nr, nw;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	while (text_content[len] != '\0')
		len++;

	write(STDOUT_FILENO, text_content, len);

	close(fd);

	return (1);
}
