#include"main.h"
#include<stdio.h>
#include<string.h>
/**
 * _strstr -> function that locates a substring.
 * @haystack: param1
 * @needle: param2
 * Return: string
 */
char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}
