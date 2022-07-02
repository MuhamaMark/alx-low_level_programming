#include<stdio.h>
/**
 * Main - Entry point
 * EXIT- is successful for this program
 */
int main(void)
{
	char c = 'a';

	while(c <= 'z')
	{
		putchar(c);
		c=c+1;
	}
	exit(EXIT_SUCCESS);
}
