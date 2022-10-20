#include "main.h"

/**
 * print_square - prints a size by size square
 * @size: represent int from main
 * Return: void
 */

void print_square(int size)
{
	int i, j;


	if (size <= 0)
		_putchar('\n');
	for (i = size; i > 0; i--)
	{
		for (j = size; j > 0; j--)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
