#include <stdio.h>

/**
* main - Prints the first 50 Fibonacci numbers.
* Return: Always 0 (success)
*/

int main(void)
{
long int term1 = 1;
long int term2 = 2;
long int fibn = 0;
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
return (0);
}

