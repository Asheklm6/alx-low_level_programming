#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - This function prints to 98
 * user inputs number to print
 * @num: number inputed
 * Return: Returns 0
 */

void print_to_98(int num)
{
	if (num <= 98)
	{
		while (num <= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num++;
		}
	}
	else if (num >= 98)
	{
		while (num >= 98)
		{
			printf("%d", num);
			if (num != 98)
			{
				printf(", ");
			}
			num--;
		}
	}
	else
	{
		printf("98");
	}

	printf("\n");

}
