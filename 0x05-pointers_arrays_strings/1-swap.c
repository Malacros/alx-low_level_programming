#include "main.h"
#include <stdlib.h>

/**
 * swap_int - swap values of two nums
 * @b : first pointer
 * @a : second pointer
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int constant = *a;
	*b = *a;
	*a = constant;
}
