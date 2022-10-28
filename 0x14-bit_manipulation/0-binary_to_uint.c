#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * power - Calculates binary multiples
 * @n: Number to calculate with
 * @x: Unsigned int power
 *
 * Description: Calculates n by n, x times
 * Return: productsumor 1 if x is 0.
 */
int power(int n, unsigned int x)
{
	if (x == 0)
		return (1);

	while (--x)
		n *= 2;

	return (n);
}

/**
 * binary_to_uint - converts binary to decimal
 * @b: Binary string pointer
 *
 * Description: Converts a binary string to pointer.
 * Return: the number or 0 if it fails.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int sum = 0, n = 0, i = 0, p, a;

	if (b == NULL)
		return (0);

	while (b[n])
	{
		if (b[n] < '0' || b[n] > '1')
			return (0);
		n++;
	}

	while (n > 0)
	{
		n--;
		p = power(2, i);
		a = (b[n] == '0') ? 0 : 1;
		sum += (a * p);
		i++;
	}

	return (sum);
}