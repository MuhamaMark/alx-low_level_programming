#include<stdio.h>
/**
 * main -> a program that prints its name, followed by a new line.
 * @argc: parameter for argument c
 * argv: array for listed commands
 * Return: 0 for success 1 for failure
 */
int main(int argc, char *argv[])
{
	printf("%s\n", *argv);
}
