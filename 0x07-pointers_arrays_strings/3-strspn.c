#include "main.h"
#include<string.h>
#include<stdio.h>
/**
 * _strspn -> function that gets the length of a prefix substring.
 * @s: param1
 * @accept: param2
 * Return: string
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}
