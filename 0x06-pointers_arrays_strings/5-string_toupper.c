#include "main.h"
#include<ctype.h>
#include<string.h>
#include<stdio.h>
/**
 * string_toupper -> function that changes all lowercase letters to upper
 * Return: string
 * @x: param1
 */
char *string_toupper(char *x)
{
	int i = 0;

	while (x[i])
	{
		if (x[i] >= 97 && x[i] <= 122)
			x[i] = x[i] - 32;
		i++;
	}

	return (x);
}
