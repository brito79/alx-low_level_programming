#include <stdio.h>

/**
* print_fibonacci_sequence - Prints the Fibonacci  given number.
* @n: The number up to which the Fibonacci sequence is printed.
*
* The function calculates and prints the Fibonacci sequence given number.
* The numbers are separated by commas and a space.
*/
void print_fibonacci_sequence(unsigned long n)
{
unsigned long prev = 1, curr = 2;
unsigned long fib;

printf("%lu, %lu", prev, curr);

while (curr <= n)
{
fib = prev + curr;
printf(", %lu", fib);

prev = curr;
curr = fib;
}

printf("\n");
}

/**
* main - Entry point of the program.
*
* Calls the print_fibonacci the value 4000000
* to print the Fibonacci sequence up to 4,000,000.
*
* Return: 0 on success.
*/
int main(void)
{
print_fibonacci_sequence(4000000);

return (0);
}

