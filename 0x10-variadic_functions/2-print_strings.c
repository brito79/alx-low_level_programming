#include "variadic_functions.h"
/**
 * print_strings - Printing an array of strings
 * @n: The number of variadic arguments passed
 * @...: The ellipsis, mean variable arguments to be taken
 * @separator: The character that will separate string array
 * Return: The void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	char *str;
	unsigned int i;

	va_list ap;

	va_start(ap, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(ap, char*);

		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(ap);
}
