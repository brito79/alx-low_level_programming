#include "main.h"
/**
  * swap_int - Swap two variables
  */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

