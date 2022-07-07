#include "main.h"
/**
 * print_numbers - prints the numbers from 0 - 9.
 */
void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		-putchar((num % 10) + '0');
		num = num + 1;
	}
	_putchar('\n');
}
