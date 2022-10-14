#include <stdlib.h>
#include <time.h>

/**
 * main - Determine either is greater than 5, is 0, or less than 6 and not 0
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	l = n % 10;
	if (l > 5)
	{
		printf("Last digit is %d and is greater than 5\n", n, l);
	}
	else if (l == 0)
	{
		printf("Last digit is %d and is 0\n", n, l);
	}
	else
	{
		printf("Last digit is %d and is less than 6 and not 0\n", n, l);
	}
	return (0);
}
