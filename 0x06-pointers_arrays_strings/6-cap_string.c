#include "main.h"
#include <stdio.h>

int is_lower(char c)
{
	return (c >= 97 && c <= 122);
}

int is_delimiter(char c)
{
	int i;
	char delimiter[] = "\t\n,.!?\"[]{}";

	for (i = 0; i < 12; i++)
	{
		if (c == delimiter[i])
			return (1);
	}
	return (0);
}

char *cap_string(char *s)
{
	char *ptr = s;
	int found_delimiter = 1;

	while (*s)
	{
		if (is_delimiter(*s))
			found_delimiter = 1;
		else if (is_lower(*s) && found_delimiter)
		{
			*s -= 32;
			found_delimiter = 0;
		}
		else
			found_delimiter = 0;

		s++;
	}

	return (ptr);
}

int main(void)
{
	char str[] = "hello, world! how are you?";
	char *ptr;

	ptr = cap_string(str);
	printf("%s\n", ptr);

	return (0);
}
