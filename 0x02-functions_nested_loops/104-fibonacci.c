#include <stdio.h>

/**
* main - Entry point
*
* Return: Always 0 (success)
*/
int main(void)
{
long int term1 = 1;
long int term2 = 2;
long int fibn;
int count;

printf("%lu, %lu", term1, term2);

for (count = 1; count <= 98; count++)
{
fibn = term1 + term2;
printf(", %lu", fibn);
term1 = term2;
term2 = fibn;
}

printf("\n");

return (0);
}

