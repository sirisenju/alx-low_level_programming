#include "main.h"
/**
 * create_file - creates a file
 * @filename: filename
 * @text_content: content to be written in the file
 * Return: 1 if success, else 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rWr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletters = 0; text_content[nletters]; nletters++)
		;

	rWr = write(fd, text_content, nletters);

	if (rWr == -1)
		return (-1);

	close(fd);

	return (1);

}
