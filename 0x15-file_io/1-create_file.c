#include "main.h"

/**
 * create_file - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @text_content: the text content
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{

	int fd, i = 0;

	fd = open(filename, O_CREAT | O_WRONLY, 0600);

	if (fd == -1)
		return (-1);

	while (text_content[i] != '\0')
		i++;

	write(fd, text_content, i);
	close(fd);

	return (1);
}
