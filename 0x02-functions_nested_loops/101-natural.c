#include <stdio.h>

/**
 * main - Sum of natural multiples
 * Return: Returns 0
 */

int main(void)

{
	unsigned long int total_of_3s, total_of_5s, total;
	int i;

	total_of_3s = 0;
	total_of_5s = 0;
	total = 0;

	for (i = 0; i < 1024; ++i)
	{
		if ((i % 3) == 0)
		{
			total_of_3s = total_of_3s + i;
		}
		else if ((i % 5) == 0)
		{
			total_of_5s = total_of_5s + i;
		}
	}
	total = total_of_3s + total_of_5s;
	printf("%lu\n", total);

	return (0);
}
