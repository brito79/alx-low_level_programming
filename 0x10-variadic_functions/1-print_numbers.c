#include "variadic_functions.h"

/**
* print_numbers - Print integers separated by a separator.
* @separator: The character that separates the integers (or NULL).
* @n: The number of integers to be printed.
* @...: The ellipsis, representing the variable arguments to be printed.
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

if (separator != NULL && i < n - 1)
{
printf("%s", separator);
}
}

printf("\n");
va_end(ap);
}

