#include"main.h"
#include<stdio.h>
/**
 * swap_int - function to swap numbers
 * @a@b: being the args
 *
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;

	*a = *b;
	*b = tmp;
}
