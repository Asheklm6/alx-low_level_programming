#include "main.h"

/**
 * _isalpha - The job of this code is to check for alphabetic characters
 * @c: This takes care of single input
 * Return: 1 if c is a letter, 0 if not
 */

int _isalpha(int c)

{
	if (((c >= 'a') && (c <= 'z')) || ((c >= 'A') && (c <= 'Z')))
		return (1);
	else
		return (0);
}
