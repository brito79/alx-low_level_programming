#include <stdio.h>

/**
* print_fibonacci - Prints the first 50 Fibonacci numbers.
*/
void print_fibonacci(void)
{
int term1 = 1;
int term2 = 2;
int fibn = 0;
int i;
int ln = 50;

printf("%d, %d", term1, term2);

for (i = 3; i <= ln; i++)
{
fibn = term1 + term2;
printf(", %d", fibn);
term1 = term2;
term2 = fibn;
}

printf("\n");
}

/**
* main - Entry point.
*
* Return: Always 0 (success).
*/
int main(void)
{
print_fibonacci();
return (0);
}

