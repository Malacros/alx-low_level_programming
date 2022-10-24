#include "main.h"
#include <stdio.h>

/**
 * prints_array - prints n elements of an array
 * @a : array
 * @n : number of values to be printed
 * Return: void
 */
void print_array(int *a, int n)
{
	int t;

	for (t = 0; t < n; t++)
	{
		print("%d", a[t]);
		if (t != n - 1)
			printf(", ");
	}

	printf("\n");
}
