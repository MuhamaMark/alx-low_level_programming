#include<stdio.h>
/**
 * main -> a program that prints its name
 * @argc: argc param
 * argv: argc param
 * Return: 0 for success 1 for failure
 */
int main(int argc __attribute__((__unused__)), char *argv[])
{
	printf("%s\n", argv[0]);

	return (0);
}
