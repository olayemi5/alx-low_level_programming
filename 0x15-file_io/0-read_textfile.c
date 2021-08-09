#include "holberton.h"
#include "main.h"

/**
 * read_textfile - reads a textfile and prints to the POSIX standard output
 * @filename: file to read and print
 * @letters: number of letters to print
 * Return: actual number of letter
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
int dest, size;
char *buffer;
if (filename == NULL)
return (0);
buffer = malloc(sizeof(char) * letters);
if (buffer == NULL)
return (0);
dest = open(filename, O_RDONLY);
size = write(STDOUT_FILENO, buffer, read(dest, buffer, letters));
if (dest == -1 || size == -1)
return (0);
close(dest);
free(buffer);
return (size);
}
