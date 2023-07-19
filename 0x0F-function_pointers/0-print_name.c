#include "function_pointers.h"

/**
 * print_name - Print the name using a function pointer.
 * @name: Pointer to the array with the name.
 * @f: Function pointer to be called on each character of the name.
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	while (*name)
	{
		f(name);
		name++;
	}
}

