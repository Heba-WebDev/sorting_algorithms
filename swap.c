#include "sort.h"

/**
 * swap - swaps two ints
 * @a: first int
 * @b: second int
 */

void swap(int *a, int *b)
{
int temp;
temp = *a;
*a = *b;
*b = temp;
}
