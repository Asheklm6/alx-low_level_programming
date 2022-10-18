#include <stdio.h>

/**
 * main - Fibonacci
 * Return: It wil return 0 if all goes well
 */

int main(void)

{
	long int a, b, c, fib;

	b = 1;
	c = 2;

	for (a = 1; a <= 50; ++a)
	{
		if (b != 20365011074)
		{
			printf("%ld, ", b);
		}
		else
		{
			printf("%ld\n", b);
		}
		fib = b + c;
		b = c;
		c = fib;
	}

	return (0);
}
