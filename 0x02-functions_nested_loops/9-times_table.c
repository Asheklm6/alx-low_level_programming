#include "main.h"

/**
 * times_table - Multiplication table
 * r_1 = row, c_1 = column, d = digits of output
 *Return: Multiplication table
 * add extra space after single digits
 */

void times_table(void)

{
	int r_1, c_1, d;

	for (r_1 = 0; r_1 <= 9; r_1++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');

		for (c_1 = 1; c_1 <= 9; c_1++)
		{
			d = (r_1 * c_1);
			if ((d / 10) > 0)
			{
				_putchar((d / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}
			_putchar((d % 10) + '0');

			if (c_1 < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
