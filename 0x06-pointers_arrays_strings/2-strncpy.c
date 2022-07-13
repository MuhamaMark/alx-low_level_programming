#include "main.h"
#include<stdio.h>
#include <string.h>
/**
 * _strncpy -> a function that copies a string
 * @dest: param
 * @src: param
 * @n: param
 *
 * Return: string in dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
