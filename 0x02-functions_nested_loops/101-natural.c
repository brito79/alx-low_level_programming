#include <stdio.h>
/**
  * main - Entry point
  *
  *Return: Always 0 (success)
  */

int main(void)
{
	int num = 1024;
	int sumT = 0;
	int i;

	for (i = 0; i < num; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sumT = sumT + i;
		}
	}
	printf("%d", sumT);
	printf("\n");
	return (0);
}

