#include <stdio.h>
/**
 * main - enrty point
 *
 *
 * Return:  always 0
 *
 */
int main(void)
{
	char k;

	for (k = 'z'; k >= 'a'; k--)
		putchar(k);
	putchar('\n');
	return (0);
}
