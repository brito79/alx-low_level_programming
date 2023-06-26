#include "main.h"
/**
  * _puts - Prints the string,to stdout followed by newline
  * @str: The characters to be printed
  */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}

