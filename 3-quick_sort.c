#include "sort.h"

void swap(int *a, int *b);
int partition(int *array, size_t size, int left, int right);
void quicksort_recurisve(int *array, size_t size, int left, int right);
void quick_sort(int *array, size_t size);

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
 * partition - partition the array
 * @array: array of partition
 * @size: size of the array
 * @left: low boundry of the array
 * @right: high boundry of the array
 *
 * Return: pivot
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
swap(array + above, pivot);
print_array(array, size);
}

return (above);
}

/**
 * quicksort_recurisve - implments quicksort algorithm through recursion.
 * @array: array of int to sort
 * @size: size of the array
 * @left: low boundry of the array
 * @right: high boundry of the array
 *
 */

void quicksort_recurisve(int *array, size_t size, int left, int right)
{
int part;

if (right - left > 0)
{
part = partition(array, size, left, right);
quicksort_recurisve(array, size, left, part - 1);
quicksort_recurisve(array, size, part + 1, right);
}
}

/**
 * quick_sort - quick sort
 * @array: array of int
 * @size: size of the array
 *
 */

void quick_sort(int *array, size_t size)
{
	if (array == NULL || size < 2)
		return;

	quicksort_recurisve(array, size, 0, size - 1);
}
