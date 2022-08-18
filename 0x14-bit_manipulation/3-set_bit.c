#include "main.h"

/**
 * set_bit - set the bit at a given index
 * @n: number to check
 * @index: index to check
 * Return: bit value or -1;
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
	return (-1);
	*n |= (1 << index);
	return (1);
}
