#include "main.h"
/**
 * print_numbers: prints the numbers from 0 to 9
 * followed by newline
 * Return: void
 */
void print_numbers(void)
{
	char n = 0;

	for (n = 0; n <= 9; n++)
		-putchar(n + '0');

	_putchar('\n');
}
