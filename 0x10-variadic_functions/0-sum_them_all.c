#include "variadic_functions.h"

/**
* sum_them_all - calculating the sum of integers
* @n: The number of variadic arguments passed
* @...: The ellipsis, mean variable arguments to be taken
* Return: The sum
*/
int sum_them_all(const unsigned int n, ...)
{
int sum;
unsigned int i;

va_list ap;

va_start(ap, n);
sum = 0;

if (n == 0)
{
	va_end(ap);
return (0);
}
for (i = 0; i < n; i++)
{
sum += va_arg(ap, int);
}
return (sum);
va_end(ap);
}


