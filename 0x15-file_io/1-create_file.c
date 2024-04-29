#include "main.h"

/**
 * create_file - create a file
 * @filename: filename
 * @text_content: text content
 *
 * Return: 1 if success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nl = 0; text_content[nl]; nl++)
		;

	rwr = write(fd, text_content, nl);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
