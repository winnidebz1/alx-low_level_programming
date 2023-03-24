#include "function_pointers.h"
#include <stdio.h>

/**
 * print_name - prints a name using a pointer to a function
 * @name: string to be printed
 * @f: pointer to a function that prints a string
 *
 * Return: void
 **/
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

