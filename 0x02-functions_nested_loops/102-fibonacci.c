#include <stdio.h>

/**
* print_fibonacci - Prints the first 50 Fibonacci numbers.
*/
void print_fibonacci(void)
{
long long int term1 = 1;
long long int term2 = 2;
long long int fibn = 0;
int i;
int ln = 50;

printf("%lld, %lld", term1, term2);

for (i = 3; i <= ln; i++)
{
fibn = term1 + term2;
printf(", %lld", fibn);
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

