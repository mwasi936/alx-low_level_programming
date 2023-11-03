#include "main.h"

/**
 * creater_file - creates a file
 * @filename: filename
 * @text_content: content written in the file
 *
 * Return: 1 if it success, -1 if it fails
 */

int create_file(const char *filename, char *text_content)
{
	int fp;
	int letters;
	int ww;

	if (!filename)
		return (-1);

	fp = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fp == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (letters = 0; text_content[letters]; letters++);

	ww = write(fp, text_content, letters);

	if (ww == -1)
		return (-1);

	close (fp);

	return (1);
}
