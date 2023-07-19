#include"function_pointers.h"

/**
 * print_name - A function that prints a name
 *
 * @name: name of srting
 * @f: pointer function printing
 *
 *
 * Return: void
*/

void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
