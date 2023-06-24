#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
unsigned long int term1 = 1;
unsigned long int term2 = 2;
unsigned long int fibn = 0;
int i;

printf("%lu, %lu", term1, term2);

for (i = 3; i <= 98; i++)
{
fibn = term1 + term2;
term1 = term2;
term2 = fibn;
printf(", %lu", fibn);
}

printf("\n");

return (0);
}

