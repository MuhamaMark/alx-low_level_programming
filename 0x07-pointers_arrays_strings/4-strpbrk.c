#include "main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strpbrk -> function that searches a string for any of a set of bytes.
 *  @s: param1
 *  @accept: param2
 *  Return: string
 *
 */
char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}
