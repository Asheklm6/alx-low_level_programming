#include "main.h"

/**
 * print_sign - checks for equality, greater than or less than
 * @c: Indicates that the input is an interger
 * Return: Number enter is greater than or equal to or less than 1
 */

int print_sign(int c)

{
	if (c > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (c < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
	_putchar('\n');
}
