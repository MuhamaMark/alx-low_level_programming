#include"main.h"
/**
 * main - entry point of program
 * print_alphabet_x10 - function to print 10 times the alphabet
 */
void print_alphabet_x10(void)
{
	int lo
	int count;
	
	for (count = 0; count <= 10; count++)
	{
		for (lo = 'a'; lo <= 'z'; lo++)
		{
			_putchar(lo);
		}
		_putchar('\n');
	}
}
