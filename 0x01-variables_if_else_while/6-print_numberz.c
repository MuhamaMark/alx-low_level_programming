#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point of program
 * Return: alwasy (0) success
 */
int main(void)
{
	char no = '0';

	while (no <= '9')
	{
		putchar(no);
		no = no + 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
