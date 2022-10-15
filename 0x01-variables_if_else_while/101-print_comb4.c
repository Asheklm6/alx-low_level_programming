#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)

{
	int item1, item2, item3;

	for (item1 = 0; item1 < 8; item1++)
	{
		for (item2 = item1 + 1; item2 < 9; item2++)
		{
			for (item3 = item2 + 1; item3 < 10; item3++)
			{
				putchar((item1 % 10) + '0');
				putchar((item2 % 10) + '0');
				putchar((item3 % 10) + '0');

				if (item1 == 7 && item2 == 8 && item3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}

	putchar('\n');

	return (0);
}
