#include "main.h"

/**
 * print_alphabet - Print abc.
 *
 * Return: Always 0
 */
void print_alphabet(void)
{
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
