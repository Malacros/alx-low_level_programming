#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - Prints the lowercase in a reverse.
 *
 * Return: Always 0
 */
int main(void)
{
	char i;

	for (i = 'z'; i >= 'a'; i--)
	{
		putchar(i);
	}
	putchar('\n');

	return (0);
}
