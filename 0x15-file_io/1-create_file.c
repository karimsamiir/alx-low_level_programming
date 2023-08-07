#include"main.h"

/**
 * _strlen - A function that returns the lenght of a string
 *
 * *k: A string that it's lenght will check
 *
 * Return: lenght of string
*/

int _strlen(char *k)
{
	int lenght = 0;

	if (!k)
		return (0);

	while (*k++)
		lenght++;
	return (lenght);
}

/**
 * create_file - A function that creates a file
 *
 * @text_content: the text to write
 * @filename: the name of the created file
 *
 * Return: 1 (success), 0 on (error)
*/

int create_file(const char *filename, char *text_content)
{
	int kim;
	ssize_t byte = 0, lenght = _strlen(text_content);

	if (!filename)
		return (-1);
	kim = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);
	if (kim == -1)
		return (-1);
	if (lenght)
		byte = write(kim, text_content, lenght);
	close(kim);
	return (byte == lenght ? 1 : -1);
}
