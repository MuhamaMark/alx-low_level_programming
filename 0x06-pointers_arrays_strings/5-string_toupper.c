#include "main.h"
#include<ctype.h>
#include<string.h>
#include<stdio.h>
/**
 * string_toupper -> function that changes all lowercase letters to upper
 * Return: string
 * @p: param1
 */
char *string_toupper(char *p)
{
	toupper(p);
	return (p);
}
