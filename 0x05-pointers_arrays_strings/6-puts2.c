#include "main.h"

/**
 * puts2 - Prints every other character from a string
 * @str: The string to print from
 */
void puts2(char *str)
{
	int length = 0;
	int i;

	while (str[length] != '\0')
	{
		length++;
	}

	for (i = 0; i < length; i += 2)
	{
		_putchar(str[i]);
	}

	_putchar('\n');
}

