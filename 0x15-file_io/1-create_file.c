#include <main.h>

/**
 * create_file - create a file
 * @fn: filename
 * @tc: text content
 *
 * Return: 1 if success, else -1
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int nl;
	int rwr;

	if (!fn)
		return (-1);

	fd = open(fn, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!tc)
		tc = "";

	for (nl = 0; tc[nl]; nl++)
		;

	rwr = write(fd, tc, nl);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
