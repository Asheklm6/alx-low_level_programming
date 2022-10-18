#include "main.h"

/**
 * jack_bauer - Printing Bauers time
 * h = hour, m = minutes
 * / 10 makes second digit to rotate
 * for loop used to ensure that it does not go beyond 24 hrs
 * Return: complete clock cycle
 */

void jack_bauer(void)

{
	int h, m;

	for (h = 0; h < 24; h++)
	{
		for (m = 0; m < 60; m++)
		{
			_putchar((h / 10) + '0');
			_putchar((h % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar('\n');
		}
	}
}
