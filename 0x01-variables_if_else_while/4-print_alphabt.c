#include <stdio.h>
/**
 * main - entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int k;

	for (k = 'a'; k <= 'z'; k++)
		if (k != 'e' && k != 'q')
			putchar(k);
	putchar('\n');
	return (0);
}
