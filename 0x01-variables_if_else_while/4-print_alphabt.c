#include <stdio.h>

/**
 * main - Prints the alphabet except q and e
 *
 * Return: Always 0
 */
int main(void)

	char n;

	for (n = 'a'; n <= 'z'; n++)
	{
		if (n != 'e' && n != 'q')
			putchar(n)	
	}
	putchar('\n');
	return (0);
}
