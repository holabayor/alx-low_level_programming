#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to be read
 * @letters: the number of letters to be read
 * Return: Number of letters to be read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{

	int fd, i = 0;
	char buff[1024];

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);
	read(fd, buff, letters);
	buff[letters] = '\0';
	while(buff[i] != '\0')
	{
		_putchar(buff[i]);
		i++;
	}
	close(fd);

	return (i);
}
