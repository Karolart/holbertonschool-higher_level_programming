#include “search_algos.h”
#include<math.h>

size_t min(size_t a, size_t b);


/**
 * jump_search - function that searches for a value in an array of
 * integers using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: number of elements in array
 * @value: value to search for
 * Return: the first index where value is located
 * If value is not present in array or if array is NULL, your function must
 * return -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step = sqrt(size), prev = 0, prev_prev = 0, flag_first_block = 1;
	while (array[min(step, size) - 1] < value)
	{
		flag_first_block = 0;
		prev_prev = prev;
		printf(“Value checked array[%lu] = [%d]\n”,
				prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			break;
	}
	if (flag_first_block)
	{
		printf(“Value checked array[%lu] = [%d]\n”,
				prev, array[prev]);
		printf(“Value found between indexes [%lu] and [%lu]\n”, prev, step);
	}
	else
		printf(“Value found between indexes [%lu] and [%lu]\n”, prev_prev, prev);
	prev = prev_prev;
	while (array[prev] <= value)
	{
		printf(“Value checked array[%lu] = [%d]\n”,
				prev, array[prev]);
		prev++;
		if (prev == min(step, size))
			return (-1);
	}
	prev--;
	if (array[prev] == value)
		return (prev);
	return (-1);
}
/**
 * min - calculate the min of two numbers
 * @a: size_t value input
 * @b: size_t value input
 * Return: return the min value
 */
size_t min(size_t a, size_t b)
{
	if (b > a)
		return (a);
	else
		return (b);
}
