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
		putchar(no);
		putchar(,);
		no = no + 1;
	}
	putchar('\n');
	exit(EXIT_SUCCESS);
}
