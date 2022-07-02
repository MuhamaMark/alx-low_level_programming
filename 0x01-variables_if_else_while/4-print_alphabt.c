#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point of a program
 * Return: always 0 success
 * exit is end of program
 */
int main(void)
{
	char lo = 'a';

	while (lo <= 'z')
	{
		while (lo == 'q' || lo == 'e')
		{
			lo = lo + 1;
		}
		putchar(lo);
		lo = lo + 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
