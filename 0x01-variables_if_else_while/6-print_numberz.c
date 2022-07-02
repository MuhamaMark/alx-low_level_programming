#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point of program
 * Return: alwasy (0) success
 */
int main(void)
{
	int no = 0;

	while (no <= 9)
	{
		putchar((no % 10) + '0');
		no = no + 1;
	}
	putchar('\n');
	return (0);
}
