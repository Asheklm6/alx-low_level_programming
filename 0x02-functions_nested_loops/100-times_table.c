#include "main.h"

/**
 * print_times_table - Prints a multiplication table up to param
 * @num: The number to be treated
 * Return: Number matrix
 */

void print_times_table(int num)
{
	int x, y, output;

	if (num >= 0 && num <= 15)
	{
		for (x = 0; x <= num; x++)
		{
			_putchar(48);
			for (y = 1; y <= num; y++)
			{
				output = x * y;
				_putchar(44);
				_putchar(32);
				if (output <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(output + 48);
				}
				else if (output <= 99)
				{
					_putchar(32);
					_putchar((output / 10) + 48);
					_putchar((output % 10) + 48);
				}
				else
				{
					_putchar(((output / 100) % 10) + 48);
					_putchar(((output / 10) % 10) + 48);
					_putchar((output % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
