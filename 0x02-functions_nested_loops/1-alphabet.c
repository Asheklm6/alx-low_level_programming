#include "main.h"

/**
 * print_alphabet - Printing of alphabets in lowercases
 * Return: It has to be 0 as always when succesful
 */

void print_alphabet(void)

{

	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar (alpha);
	}
	_putchar('\n');
}
