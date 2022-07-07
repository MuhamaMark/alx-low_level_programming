#include "main.h"
/**
 * print_numbers - prints the numbers from 0 - 9.
 */
void print_numbers(void)
{
	int num = 0;

	while (num <= 9)
	{
		-putchar(num);
		num = num + 1;
	}
	_putchar('\n');
}
