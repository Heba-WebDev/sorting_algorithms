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
 * bubble_sort - sorts data
 * @array: a pointer to an array of integers
 * @size: size of the array
 *
 */

void bubble_sort(int *array, size_t size)
{

size_t i, len = size;
int flag = 0;

if (array == NULL || size < 2)
{
return;
}

while (!flag)
{
flag = 1;
for (i = 0; i < len - 1; i++)
{
if (array[i] > array[i + 1])
{
swap(&array[i], &array[i + 1]);
print_array(array, size);
flag = 0;
}
}
len--;
}
}
