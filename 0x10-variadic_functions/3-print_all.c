#include "variadic_functions.h"
/**
 * print_all - Printing an format type
 * @format: The different types of formats to be printed
 * @...: The ellipsis, mean variable arguments to be taken
 * Return: The void
 */
void print_all(const char * const format, ...)
{
	char *str;
	int i;
	va_list ap;

	va_start(ap, ...);


