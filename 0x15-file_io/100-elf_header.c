#include "holberton.h"
#include "main.h"

/**
 * main-displays the information contained in the ELF header at the start of ELF file
 * @argc: argument count
 * @argv: argument variable
 * Return: 0
 */

int main(int argc, char *argv[])
{
int dest;
ssize_t size;
char buffer[5];
char elf[1];
if (argc != 2)
{
dprintf(STDERR_FILENO, "Usage: cp file\n");
exit(97);
}
dest = open(argv[1], O_RDWR);
if (dest == -1)
{
dprintf(STDERR_FILENO, "Error: Can't open from file %s\n", argv[1]);
exit(98);
}
size = read(dest, buffer, 4);
if (size == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
size = lseek(dest, 1, SEEK_SET);
size = read(dest, elf, 1);
if (elf[0] != 'E')
exit(98);
close(dest);
return (0);
}
