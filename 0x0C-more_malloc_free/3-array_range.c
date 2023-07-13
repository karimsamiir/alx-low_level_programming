#include"main.h"

/**
 * array_range - A function that creates an array of integers
 *
 * @min: int
 * @max: int
 *
 * Return: array of integers
*/

int *array_range(int min, int max)
{
	int length, k;
	int *ptr;

	if (min > max)
		return (NULL);
	length = max - min + 1;
	ptr = malloc(sizeof(int) * length);
	if (!ptr)
		return (NULL);
	for (k = 0; k < length; k++)
		ptr[i] = min++;
	return (ptr);
}
