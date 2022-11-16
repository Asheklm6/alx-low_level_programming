#include "function_pointers.h"

/**
 * int_index - finds the integer
 * @array: array
 * @size: array size 
 * @cmp: pointer compares the function
 *
 * Return: index the first element if cmp does not
 * return 0 or -1 if there is no element found
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (cmp && array)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
				return (i);
		}

	}

	return (-1);
}
