#include<stdio.h>
/**
 * main - entry point of programme
 * Return: always(0) success
 */
int main(void)
{
	int num = 0;

	while (num <= 9)
	{
		printf("%d", num);
		num = num + 1;
	}
	printf("\n");
	return (0);
}
