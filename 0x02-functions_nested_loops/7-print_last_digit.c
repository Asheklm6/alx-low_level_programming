#include "main.h"

/**
 * print_last_digit - Last digit
 * @nld: Represents number's last digit
 * Return: Results for last digit
 */

int print_last_digit(int nld)
{
	int prld;

	prld = (nld % 10);

	if (prld < 0)
	{
		prld = (-1 * prld);
	}

	_putchar(prld + '0');
	return (prld);
}
