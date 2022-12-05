#include "main.h"
/**
 * append_text_to_file - append a text to tge end of the file
 * @filename: name of the file
 * @text_content: added content
 * Return: 1 if the file exists else 0
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	int nletters;
	int rWr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_content)
	{
		for (nletters = 0; text_content[nletters]; nletters++)
			;

		rWr = write(fd, text_content, nletters);

		if (rWr == -1)
			return (-1);
	}

	close(fd);

	return (1);

}
