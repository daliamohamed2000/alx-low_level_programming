#include "main.h"

/**
 * swap_int - swaps the values of two integers.
 *
 * @a: input pointer 1
 * @b: input pointer 2
 *
 * return: 0
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}