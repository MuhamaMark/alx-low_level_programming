#include "maing.h"
#include<ctype.h>
#include<string.h>
#include<stdio.h>
/**
 * string_toupper -> function that changes all lowercase letters to upper
 * Return: 0 alwasy success
 * @n: param1
 */
char *string_toupper(char *n);
{
	int m = 0;

	while (n[m])
	{
		if (n[m] >= 97 && n[m] <= 122)
		{
			n[m] -= 32;
		}
		m++
	}
	return (n);
}
