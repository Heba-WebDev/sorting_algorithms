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
 * partition - partition the array in place
 * @array: array to be partitioned
 * @low: low boundry of the array
 * @high: high boundry of the array
 * @size: size of the array
 *
 * Return: index of pivot
 */
int partition(int *array, int low, int high, size_t size)
{

int pivot = array[high];
int mid = low - 1;
int i;

for (i = low; i <= high; i++)
{
if (array[i] <= pivot)
{
mid++;
if (mid != i)
{
swap(&array[mid], &array[i]);
print_array(array, size);
}
}
}

if (mid + 1 != high)
{
swap(&array[mid + 1], &array[high]);
print_array(array, size);
}

return (mid + 1);
}

/**
 * quickSort_recursion - calls the function recursivly
 * @array: the array to be looped
 * @low: low boundry of the array
 * @high: high boundery of the array
 * @size: the size of the array
 */

void quickSort_recursion(int *array, int low, int high, size_t size)
{
int index;

if (low < high)
{
index = partition(array, low, high, size);
quickSort_recursion(array, low, index - 1, size);
quickSort_recursion(array, index + 1, high, size);
}
}

/**
 * quick_sort - sorts data
 * @array: a pointer to an array of int
 * @size: size of the array
 *
 */

void quick_sort(int *array, size_t size)
{

if (!array || size < 2)
return;

quickSort_recursion(array, 0, size - 1, size);

}
