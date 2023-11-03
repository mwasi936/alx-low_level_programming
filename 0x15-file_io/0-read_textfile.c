#include "main.h"
#include <stdarg.h>

/**
 * read_textfile - reads a file and prints it to the POSIX
 * @size_t letters: number of letters to  read and print
 * @filename: filename
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t rr, ww;
	int fd;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	rr = read(fd, buf, letters);
	ww = write(STDOUT_FILENO, buf, rr);

	close (fd);

	free(buf);

	return (ww);

}
