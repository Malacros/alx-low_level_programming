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

	for (i = 'a'; i >= 'z'; i--)
		printf("%c\n", i);
	return (0);
}
