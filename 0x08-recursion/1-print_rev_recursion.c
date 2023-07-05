#include "main.h"

/**
 * _print_rev_recursion - Prints string in reverse recursively
 * @s: The string to be reversed
 *
 * Return: void
 */
void _print_rev_recursion(char *s)
{
	if (*s == '\0') /* Base case: end of string */
		return;

	_print_rev_recursion(s + 1); /* Recursively call the next character */
	_putchar(*s); /* Print the current character */
}

