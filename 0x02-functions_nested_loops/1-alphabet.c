#include "main.h"
/**
 * main - entry point of the program
 * print_alphabet function - print lowercase alphabet
 * Function print_alphabet - printing lowercase alphabet
 */
void print_alphabet(void)
{
	int lo = 'a';

	while (lo <= 'z')
	{
		_putchar(lo);
		lo = lo + 1;
	}
	_putchar('\n'); }
