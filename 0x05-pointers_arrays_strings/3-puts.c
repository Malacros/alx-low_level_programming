#include "main.h"

/**
 * _puts - prints a string
 * @str : A pointer to an int that will be changed
 * Return: void
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str++);
	}
	_putchar('\n');
}
