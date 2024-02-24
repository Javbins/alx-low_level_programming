#include "main.h"

/**
 * print_alphabet - main entry point
 *
 * Return: 0
 */

void print_alphabet(void)
{
	char b;

	for (b = 'a'; b <= 'z'; b++)
	{
		_putchar(b);
	}
	_putchar('\n');
}
