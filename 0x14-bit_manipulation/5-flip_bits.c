#include "main.h"

/**
 * flip_bits - finds number of bits to be flipped
 * from a number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits flipped
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int lg, sm, count = 0;

	if (n == m)
	{
		return (0);
	}
	else if (n > m)
	{
		lg = n;
		sm = m;
	}
	else
	{
		lg = m;
		sm = n;
	}

	while (lg != 0)
	{
		if ((lg & 1) != (sm & 1))
			count++;
		lg = lg >> 1;
		sm = sm >> 1;
	}

	return (count);
}
