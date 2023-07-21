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
int *copy = array;
int temp;
int i, j;
int flag = 1;

if (array == NULL || size < 2)
return;


while (flag)
{
flag = 0;
for (i = 0; i < size; i++)
{
for (j = 0; j < (size - 1); j++)
{
if (copy[j] < copy[j + 1])
{
swap(&copy[j], &copy[j + 1]);
print_array(array, size);
flag = 1;
}
}
}
}
}
