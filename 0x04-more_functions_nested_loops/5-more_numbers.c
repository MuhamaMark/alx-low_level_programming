#include "main.h"

/**
 * more_numbers - prints numbers 0 to 14
 * 10 times and a newline.
 */
void more_numbers(void)
{
	int num, co;

	for (co = 0; co <= 10; co++)
	{
		for (num = 0; num <= 14; num++)
		{
			if (num > 9)
				_putchar(num / 10 + '0');
				_putchar(num % 10 + '0');
		}
		_putchar('\n');
	}
}
