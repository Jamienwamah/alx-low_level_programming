#include "main.h"

/**
 * flip_bits - returns no of bits to flip for two numbers to match
 * @n: first number
 * @m: second number
 * Return: number of bits to flip;
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
	if (flipped & 1)
	count++;
	flipped >>= 1;
	}
	return (count);
}
