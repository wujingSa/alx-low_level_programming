#include "main.h"

/**
 * binary_to_uint - converts a binary string to an unsigned integer.
 * @b: pointer to a string containing a binary number
 *
 * Return: the unsigned integer representation of the binary number,
 *         or 0 if there is an error.
 */
unsigned int binary_to_uint(const char *b)
{
	int index;
	unsigned int number;

	number = 0;
	if (!b)
		return (0);
	for (index = 0; b[index] != '\0'; index++)
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
	}
	for (index = 0; b[index] != '\0'; index++)
	{
		number <<= 1;
		if (b[index] == '1')
			number += 1;
	}
	return (number);
}
