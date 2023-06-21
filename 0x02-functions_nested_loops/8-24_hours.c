#include "main.h"
/**
  * jack_bauer - Printing every minute ofthe day
  *
  * _putchar: Prints hours, minutes and seconds
  */

void jack_bauer(void)
{
	int f1, s2, t3, f4;

	for (f1 = 0; f1 <= 2; f1++)
	{
		for (s2 = 0; s2 <= 9; s2++)
		{
			for (t3 = 0; t3 <= 9; t3++)
			{
				for (f4 = 0; f4 <= 9; f4++)
				{
					if (f1 >= 2 && s2 >= 4)
						break;
					_putchar(f1 + 48);
					_putchar(s2 + 48);
					_putchar(58);
					_putchar(t3 + 48);
					_putchar(f4 + 48);
					_putchar('\n');
				}
			}
		}
	}
}


