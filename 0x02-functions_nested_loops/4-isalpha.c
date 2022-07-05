#include "main.h"
/**
 * _isalpha - checks for alphabetical letters
 * @c: a charcter to be checked
 * Return: returns a value 1 or 0 depending on condition
 */
int _isalpha(int c)
{
	return ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'));
}
