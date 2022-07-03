#include<stdio.h>
#include<stdlib.h>
/**
 * main - entry point program
 * Return: always 0 success
 */
int main(void)
{
	int no = 0;

	while (no <= 9)
	{
		putchar((no % 10) + '0');
		no = no + 1;
		if (no == 9)
			continue;
		putchar(',');
		putchar(' ');

	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
