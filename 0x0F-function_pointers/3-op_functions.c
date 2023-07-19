#include "main.h"
#include <stdio.h>
#include <stdlib.h>

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
  * op_add - Adding numbers
  * @a: The first number
  * @b: The second number
  * Return: Operated result interger
  */
int op_add(int a, int b)
{
	return (a + b);
}
/**
  * op_sub - subtracting numbers
  * @a: The first number
  * @b: The second number
  * Return: Operated result interger
  */

int op_sub(int a, int b)
{
	return (a - b);
}
/**
  * op_mul - multiplying numbers
  * @a: The first number
  * @b: The second number
  * Return: Operated result interger
  */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
  * op_div - Dividing numbers
  * @a: The first number
  * @b: The second number
  * Return: Operated result interger
  */
int op_div(int a, int b)
{
	return (a / b);
}
/**
  * op_mod - modulo of a  number
  * @a: The first number
  * @b: The second number
  * Return: Operated result interger
  */
int op_mod(int a, int b)
{
	return (a % b);
}
