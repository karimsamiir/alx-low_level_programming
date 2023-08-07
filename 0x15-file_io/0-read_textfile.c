#include"main.h"

/**
 * read_textfile - A function that reads a text file and prints
 *			it to the POSIX standard output
 *
 * @letters: the number of bytes to read
 * @filename: the name of the file to read
 *
 * Return: the number of bytes printed
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	int kim;
	ssize_t byte;
	char rd[READ_BUF_SIZE];

	if (!filename || !letters)
		return (0);
	kim = open(filename, O_RDONLY);
	if (kim == -1)
		return (0);

	byte = read(kim, &rd[0], letters);
	byte = write(STDOUT_FILENO, &rd[0], byte);
	close(kim);

	return (byte);

}
