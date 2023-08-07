#include"main.h"

/**
 * _strlen - A function that returns the lenght of a string
 *
 * @k: the string lenght to check
 *
 * Return: lenght of the string
*/

int _strlen(char *k)
{
	int l = 0;

	if (!k)
		return (0);

	while (*k++)
		l++;
	return (l);
}

/**
 * append_text_to_file - A function that appends text at the end of a file
 *
 * @filename: the name of the file created
 * @text_content: text to write
 *
 * Return: 0 (success), 0 on (error)
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int kim;
	ssize_t byte = 0, lenght = _strlen(text_content);

	if (!filename)
		return (-1);
	kim = open(filename, O_WRONLY | O_APPEND);
	if (kim == -1)
		return (-1);
	if (lenght)
		byte = write(kim, text_content, lenght);
	close(kim);
	return (bytes == len ? 1 : -1);
}
