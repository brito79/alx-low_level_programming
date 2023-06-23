#include <stdio.h>
#include <stdlib.h>

/**
* print_fibonacci - Prints the first n Fibonacci numbers
* @n: The number of Fibonacci numbers to print
*/
void print_fibonacci(int n)
{
int *fib = malloc(n * sizeof(int));
int i;

if (fib == NULL) {
printf("Memory allocation failed\n");
return;
}

fib[0] = 1;
fib[1] = 2;

for (i = 2; i < n; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < n; i++)
{
printf("%d", fib[i]);

if (i != n - 1)
{
printf(", ");
}
}

printf("\n");

free(fib);
}

