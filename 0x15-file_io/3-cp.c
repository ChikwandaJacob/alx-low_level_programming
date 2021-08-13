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
	ssize_t in_fd = open(argv[1], O_RDONLY), bytes_read;
	ssize_t out_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	if (in_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",
			argv[1]);
		exit(98);
	}

	if (out_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	do {
		bytes_read = read(in_fd, buf, 1024);
		write(out_fd, buf, bytes_read);
	} while (bytes_read);

	if (close(out_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %li\n", out_fd);
		exit(100);
	}

	return (0);
}
