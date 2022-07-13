#include "main.h"
#include<stdio.h>
#include <string.h>
/**
 * _strncpy -> a function that copies a string.
 * @desc: param
 * @src: param
 * @n: param integer
 *
 * Return: 0 always success
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
