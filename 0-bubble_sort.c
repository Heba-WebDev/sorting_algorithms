#include "sort.h"

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

if (array == NULL || size < 2)
return;


for (i = 0; i < size; i++)
{
for (j = 0; j < (size - 1); j++)
{
if (copy[j] < copy[j + 1])
{
temp = copy[j];
copy[j] = copy[j + 1];
copy [j + 1] = temp;
print_array(array, size);
}
}
}
}
