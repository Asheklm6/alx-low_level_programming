#include <stdio.h>

/**
 * main - Entry
 * Return: Always 0
 */

int main(void)

{
	int digt;

	for (digt = 0; digt < 10; digt++)
		putchar((digt % 10) + '0');

	putchar('\n');

	return (0);
}
