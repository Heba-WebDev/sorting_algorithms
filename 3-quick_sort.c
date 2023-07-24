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
 * quicksort_recursive - sorts array
 * @array: the array to sort
 * @size: size of the array to sort
 * @left: low boundry of the array
 * @right: high boundry of the array
 *
 */
void quicksort_recursive(int *array, size_t size, int left, int right)
{
int part;

if (right - left > 0)
{
part = partition(array, size, left, right);
quicksort_recursive(array, size, left, part - 1);
quicksort_recursive(array, size, part + 1, right);
}
}

/**
 * partition - partition the array in place
 * @array: array to be partitioned
 * @size: size of the array
 * @left: low boundry of the array
 * @right: high boundry of the array
 *
 * Return: index of pivot
 */
int partition(int *array, size_t size, int left, int right)
{

int *pivot, above, below;
pivot = array + right;

for (above = below = left; below < right; below++)
{
if (array[below] < *pivot)
{
if (above < below)
{
swap(array + below, array + above);
print_array(array, size);
}
above++;
}
}

if (array[above] > *pivot)
{
swap_ints(array + above, pivot);
print_array(array, size);
}

return (above);
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

quicksort_recursive(array, 0, size - 1, size);

}
