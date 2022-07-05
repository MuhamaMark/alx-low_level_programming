#include"main.h"
/**
 * main - entry point of program
 * print_alphabet_x10 - function to print 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int lo = 'a';
	int count;
	
	for (count = 0; count <= 10; count++)
	{
		while (lo <= 'z')
		{
			_putchar(lo);
			lo = lo + 1;
		}
	}
	_putchar('\n');
}
