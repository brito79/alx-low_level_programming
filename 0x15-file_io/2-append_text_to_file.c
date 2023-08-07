#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: The name of the file.
 * @text_content: The string to add to the end of the file.
 *
 * Return: 1 on success, -1 on failure.
 *         If filename is NULL, return -1.
 *         If text_content is NULL, return 1 if the file exists, -1 if not.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, close_status, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;
	}

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	write_status = write(fd, text_content, len);
	close_status = close(fd);

	if (write_status == -1 || close_status == -1)
		return (-1);

	return (1);
}

