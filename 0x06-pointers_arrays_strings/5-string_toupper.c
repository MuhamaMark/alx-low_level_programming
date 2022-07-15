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

	for (i = 0; s[i] != '\0'; i++)
	{
		if (x[i] >= 'a' && x[i] <= 'z')
			x[i] = x[i] - 32;
	}

	return (x);
}
