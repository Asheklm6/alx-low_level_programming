#include <stdio.h>

/**
 * main - Entry point
 * Return: Always 0
 */

int main(void)

{
	int set1, set2;

	for (set1 = 0; set1 <= 98; set1++)
	{
		for (set2 = set1 + 1; set2 <= 99; set2++)
		{
			putchar((set1 / 10) + '0');
			putchar((set1 % 10) + '0');
			putchar(' ');
			putchar((set2 / 10) + '0');
			putchar((set2 % 10) + '0');

			if (set1 == 98 && set2 == 99)
				continue;

			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
