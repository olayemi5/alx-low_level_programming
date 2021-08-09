#include "holberton.h"

/**
 * main - copy the content of file to another file
 * @argc: argument count
 * @argv: argument variable
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
int dest1, dest2, w;
ssize_t size = 1024;
char buffer[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
dest1 = open(argv[1], O_RDONLY);
if (dest1 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
dest2 = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);
if (dest2 == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
while (size == 1024)
{
size = read(dest1, buffer, 1024);
if (size == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
w = write(dest2, buffer, size);
if (w == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
if (close(dest1) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest1);
exit(100);
}
if (close(dest2) == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", dest2);
exit(100);
}
return (0);
}
