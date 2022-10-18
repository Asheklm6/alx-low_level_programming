#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Returns 0 if no error
 */

int main(void)

{
	int a;
	unsigned long int b, c, fib, total;

	b = 1;
	c = 2;
	total = 0;

	for (a = 1; a <= 33; ++a)
	{
		if (b < 4000000 && (b % 2) == 0)
		{
			total = total + b;
		}
		fib = b + c;
		b = c;
		c = fib;
	}

	printf("%lu\n", total);

	return (0);
}
