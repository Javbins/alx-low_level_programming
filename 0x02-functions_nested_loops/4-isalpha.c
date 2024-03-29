#include "main.h"

/**
 *_isalpha - checks for alphabetic character
 *
 * @c: parameter to be checked
 *
 * Return: 0 or 1 on success
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
