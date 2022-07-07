#include "main.h"
/**
 * print_numbers - prints the numbers from 0 to 9
 * followed by newline
 */
void print_numbers(void)
{
	int n = 0;

	while (n <= 9)
	{
		-putchar((n % 10) + '0');
		n = n + 1;
	}
	_putchar('\n');
}
