#include "main.h"

/**
 * print_alphabet_x10 - This function prints alphabet mltiplied by 10
 * Return: x10 a-z
 */

void print_alphabet_x10(void)

{
	char alpha, abc;

	abc = 0;

	while (abc < 10)
	{
		for (alpha = 'a'; alpha <= 'z'; alpha++)
		{
			_putchar (alpha);
		}
		abc++;

		_putchar('\n');
	}
}
