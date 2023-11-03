#include "main.h"
#include <stdarg.h>

/**
 * @size_t letters: number of letters to be read and printed
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
