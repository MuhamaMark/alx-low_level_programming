#include<stdio.h>
/**
 * main -> a program that prints its name
 * @argc: argc param
 * argv: argc param
 * Return: 0 for success 1 for failure
 */
int main(int argc _attribute_((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
