#include "main.h"
/**
 * print_times_table - Prints a times table of the input
 * starting from 0 to 9
 */
void times_table(void)
{
	int no, mult, prod;

	for (no = 0; no < 10; no++)
	{
		for (mult = 0; mult < 10; mult++)
		{
			prod = no * mult;
			if (mult == 0)
				_putchar(prod + '0');
			if (mult != 0 && prod < 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(prod + '0');
			}
			else if (prod >= 10)
			{
				_putchar(',');
				_putchar(' ');
				_putchar((prod / 10) + '0');
				_putchar((prod % 10) + '0');
			}
		}
		_putchar('\n');
	}
}

