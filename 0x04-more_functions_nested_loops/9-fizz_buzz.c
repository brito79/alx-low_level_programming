#include <stdio.h>
/**
  * fizzbuzz - Print the numbers,fizz and buzz
  */
void fizzbuzz(void);
/**
  * main - Entry Point
  * Return: Always 0 (success)
  */
int main(void)
{
	fizzbuzz();
	return (0);
}
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz ");
		}
		else
		{
			printf("%d ", i);
		}
	}
	printf("\n");
}
