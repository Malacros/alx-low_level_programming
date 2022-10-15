#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Prints all digit possible numbers
 *
 * Return: Always 0
 */
int main(void)
{
	int h;

	for (h = 48; h < 58; h++)
	{
		putchar(h);
		if  (h != 57)
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
