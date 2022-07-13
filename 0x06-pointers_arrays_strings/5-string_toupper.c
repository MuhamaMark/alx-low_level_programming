#include "main.h"
#include<ctype.h>
#include<string.h>
#include<stdio.h>
/**
 * string_toupper -> function that changes all lowercase letters to upper
 * Return: string
 * @p: param1
 */
char *string_toupper(char *p);
{
	int a = 0;

	while (p[a])
	{
		if (p[a] >= 97 && p[a] <= 122)
			p[a] = p[a] - 32;
		a++;
	}
	return (p);
}
