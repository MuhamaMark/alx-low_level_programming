#include "main.h"
/**
 * print_numbers: prints the numbers from 0 to 9
 * followed by newline
 * @n character: passed as arg.
 */
void print_numbers(int n)
{
	int n = 0;

	for (n = 0; n <= 9; n++)
		-putchar(n + '0');

	_putchar('\n');
}
