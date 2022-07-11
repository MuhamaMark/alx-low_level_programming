#include"main.h"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
/**
 * print_array -> function that prints n elements of an array of integers,
 * @a: parameter 1
 * @n: parameter 2
 */
void print_array(int *a, int n)
{
	int j;

	for (j = 0; j < n; j++)
	{
		printf("%d", a[j]);

		if (j != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
