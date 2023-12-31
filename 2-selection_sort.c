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

int *min;
size_t  i, j;

if (array == NULL || size < 2)
return;

for (i = 0; i < size - 1; i++)
{
min = array + i;
for (j = i + 1; j < size; j++)
{
min = (array[j] < *min) ? array + j : min;
}
if (array + i != min)
{
swap(array + i, min);
print_array(array, size);
}
}
}
