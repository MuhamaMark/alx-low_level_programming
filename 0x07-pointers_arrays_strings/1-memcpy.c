#include "main.h"
#include<stdio.h>
/**
 * _memcpy -> a function that copies memory data
 * @dest: param1
 * @src: param2
 * @n: param integer
 * Return: string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);
	return (dest);
}
