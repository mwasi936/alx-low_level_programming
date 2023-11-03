#include "main.h"

/**
 *append_text_to_file - appends text at the end of a file
 *@filename: filename
 *@text_content: added content
 *Return: 1 if file exists, -1 if file doesnot exist 
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int letters;
	int ww;
	int fp;

	if (!filename)
		return (-1);

	fp = open(filename, O_WRONLY | O_APPEND);

	if (fp == -1)
		return (-1);

	if (text_content)
	{
		for (letters = 0; text_content[letters]; letters++);

		ww = write(fp, text_content, letters);

		if (ww == -1)
			return (-1);
	}

	close (fp);

	return (1);
}
