#include "main.h"

/**
 * print_alphabet_x10 - Function that print 10 times the alphabet a..z
 *
 * Return: Always 0 (Success)
 */

void print_alphabet_x10(void)
{
	char c, i;

	for (i = 0; i <= 9; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
