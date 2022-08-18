#include "main.h"

/**
 * get_bit - get the bit at a given index
 * @n: number to check
 * @index: index to check
 * Return: bit value or -1;
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
	return (-1);
	*n |= (1 << index);
	return (1);
}
