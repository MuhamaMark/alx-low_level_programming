#include"main.h"
/**
 * print_numbers - prints the numbers from 0-9.
 */
void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		_putchar((num % 10) + '0');
	}
	_putchar('\n');
}
