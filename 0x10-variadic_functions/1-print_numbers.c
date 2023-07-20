#include "variadic_functions.h"
/**
 * print_numbers - printing of integers separated by a separator
 * @n: The number of variadic arguments passed
 * @separator: The charactor then will separate integers
 * @...: The ellipsis, mean variable arguments to be taken
 * Return: The void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int num = 0;

	va_list ap;

	va_start(ap, n);

	if (n == 0)
	{
		return;
	}
	for (i = 0; i < n; i++)
	{
		num = va_arg(ap, int);
		printf("%d", num);

		if (i < n - 1 && separator != NULL)
		{
			printf("%s", separator);
		}
		else if(separator == NULL)
		{
			return;
		}
		
	}
	printf("\n");
	va_end(ap);
}
