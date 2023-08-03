#include "main.h"
#include <math.h>

/**
* binary_to_uint - Converts the binary to unsigned int
* @b: The string to be converted
* Return: The converted int
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int len_b = 0;
unsigned int number = 0;
unsigned int i;

if (b == NULL)
{
return (0);
}

while (b[len_b] != '\0')
{
if (b[len_b] != '0' && b[len_b] != '1')
{
return (0);
}
len_b++;
}

for (i = 0; i < len_b; i++)
{
number = number * 2 + (b[i] - '0');
}

return (number);
}

