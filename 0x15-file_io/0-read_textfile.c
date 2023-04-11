#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: the name of the file to read
 * @letters: the number of letters to read and print
 *
 * Return: the actual number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char buffer[1024];
	ssize_t bytes_read, bytes_written, total_bytes = 0;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	while ((bytes_read = read(fd, buffer, sizeof(buffer))) > 0)
	{
		bytes_written = write(STDOUT_FILENO, buffer, bytes_read);
		if (bytes_written != bytes_read)
		{
			close(fd);
			return (0);
		}
		total_bytes += bytes_written;
		if ((size_t)total_bytes >= letters)
			break;
	}

	close(fd);
	return (total_bytes);
}
