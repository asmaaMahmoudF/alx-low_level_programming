#include "main.h"

/**
 * binary_to_uint - convert binary string to decimal
 * @b: binary string
 *
 * Return: decimal (unsigned int)
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_val = 0;
	int base = 1; /* 2^0 = 1 */
	/* Find the length of the string to iterate from end to start */
	const char *temp = b;

	/*Check for NULL string*/
	if (!b)
		return (0);


	while (*temp)
		temp++;

	/* Begin conversion from binary to decimal */
	while (--temp >= b)
	{
		/* Check for invalid character in string */
		if (*temp != '0' && *temp != '1')
			return (0);

		if (*temp == '1')
			dec_val += base;

		base *= 2;
	}

	return (dec_val);
}
