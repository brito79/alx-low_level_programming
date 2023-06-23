#include <stdio.h>

/**
* main - Entry point of the program
*
* Return: 0 (Success)
*/
int main(void)
{
int sum = 0;
int prev = 1;
int curr = 2;

while (curr <= 4000000)
{
if (curr % 2 == 0)
{
sum += curr;
}

int next = prev + curr;
prev = curr;
curr = next;
}

printf("Sum of even-valued terms: %d\n", sum);

return (0);
}

