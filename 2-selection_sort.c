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

/**
 * selection_sort - sorts data
 * @array: a pointer to an array of int
 * @size: size of the array
 *
 */

void selection_sort(int *array, size_t size)
{

size_t min, i, j, len;

for (i = 0; i < len; i++)
{
min = i;
for (j = i + 1; j < len; j++)
{
if (array[j] < array[min])
{
min = j;
}
}
if (i != min)
{
swap(&array[i], &array[min]);
}
len--;
}
}
