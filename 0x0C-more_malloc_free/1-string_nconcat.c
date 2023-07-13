#include"main.h"
#include<stdio.h>

/**
 * string_nconcat - A function that concatenates two strings
 *
 * @s1: pointer to first string
 * @s2: pointer to second string
 * @n: num of bytes
 *
 * Return: pointer to space in memory containing concatenated string
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i, k, str1_len, str2_len;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (str1_len = 0; s1[str1_len] != '\0'; str1_len++)
		;
	for (str2_len = 0; s2[str2_len] != '\0'; str2_len++)
		;
	str = malloc(str1_len + n + 1);
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (k = 0; k < n; k++)
	{
		str[i] = s2[k];
		i++;
	}

	str[i] = '\0';

	return (str);
}
