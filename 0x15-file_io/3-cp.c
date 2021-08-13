#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>


/**
 * main - main function of the file
 * @argc: number of command line arguments
 * @argv: string values of command line arguments
 *
 * Return: 1 on success.
 */
int main(int argc, char **argv)
{
	ssize_t fd = open(argv[1], O_RDONLY), bytes_read;

	char buf[1024];

	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	bytes_read = read(fd, buf, 1024);

	if (fd == -1 || bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	fd = open(argv[2], O_WRONLY | O_RDONLY | O_TRUNC, 0664);

	if (fd == -1 || write(fd, buf, bytes_read) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[1]);
		exit(99);
	}

	if (close(fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %li\n", fd);
		exit(100);
	}

	return (0);
}
