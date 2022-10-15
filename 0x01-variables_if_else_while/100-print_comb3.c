#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)

{

	int controlA;
	int controlB;

	for (controlA = 0; controlA < 9; controlA++)
	{
		for (controlB = controlA + 1; controlB < 10; controlB++)
		{
			putchar((controlA % 10) + '0');
			putchar((controlB % 10) + '0');

			if (controlA == 8 && controlB == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);
}
