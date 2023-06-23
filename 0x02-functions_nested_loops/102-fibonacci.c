#include <stdio.h>

/**
* print_fibonacci - Prints the first 50 Fibonacci numbers
*/
void print_fibonacci(void)
{
int fib[50];
int i;

fib[0] = 1;
fib[1] = 2;

for (i = 2; i < 50; i++)
{
fib[i] = fib[i - 1] + fib[i - 2];
}

for (i = 0; i < 50; i++)
{
printf("%d", fib[i]);

if (i != 49)
{
printf(", ");
}
}

printf("\n");
}

/**
* main - Entry point of the program
*
* Return: Always 0 (Success)
*/
int main(void)
{
print_fibonacci();

return (0);
}

