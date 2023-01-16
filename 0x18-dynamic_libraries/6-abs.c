#include "main.h"

/**
 * _abs - This function calculates absolute numbers from integers
 * @ab: Represents entered integers
 * Return: This will return the calculated absolute value
 */

int _abs(int ab)

{
	return (ab * ((ab > 0) - (ab < 0)));
}
